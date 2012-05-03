/*
 * =====================================================================================
 *
 *       Filename:  list.c
 *
 *    Description:  Chained list implementation
 *
 *        Version:  1.0
 *        Created:  19-03-2012 10:36:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */

#include <iostream>
#include "List.h"

using namespace std;

namespace aed {

List::List() {
   first = NULL;
   last = NULL;
}

List::~List() {
    Node *aux, *aux2;

    aux = first;
    while(aux != NULL) {
       aux2 = aux;
       aux = aux->getNext();
       delete aux2;
    }

    first = NULL;
    last = NULL;
}

void List::setFirst(Node *f) {
   first = f;
}

Node* List::getFirst() {
   return first;
}

void List::setLast(Node *l) {
   last = l;
}

Node* List::getLast() {
   return last;
}

void List::insertFirst (int d) 
{
   Node *aux;

   aux = new Node(d);

   if (isEmpty())
      last = aux;

   aux->setNext(first);
   setFirst(aux);
   size++;
}

void List::insertLast (int d)
{
   Node *aux, *l;

   if (isEmpty())
      insertFirst(d);
   else
   {
      aux = new Node(d);
      aux->setNext(NULL);
      l = getLast();
      l->setNext(aux);
      setLast(aux);
   }
   size++;
}

int List::removeLast()
{
   Node *penultimate, *aux, *f;
   int d;

   if (!isEmpty())
   {
      f = getFirst();
      if (f->getNext() == NULL)
      {
         d = f->getData();
         delete(f);
         setLast(NULL);
         setFirst(NULL); 
      }
      else
      {
         penultimate = getFirst();

         while (penultimate->getNext != NULL)
         {
            aux = penultimate;
            penultimate = penultimate->getNext();
         }

         // we found the penultimate element
         d = penultimate->getData();
         aux->setNext(NULL);
         setLast(aux);
         delete(penultimate);
      }
      size--; 
      return d;
   }
   else 
   {
      cout << "Lista vazia!" << endl;
      return -1;
   }
}
    
int List::removeFirst()
{
   Node *aux, *f;
   int d;

   if (!isEmpty())
   {
      aux = getFirst();
      setFirst(aux->getNext());
      d = aux->getData();

      delete(aux);

      if (getFirst() == NULL)
         setLast(NULL);

      size--;
      return d;
   }
   else 
   {
      cout << "Lista vazia!" << endl;
      return -1;
   }
}

bool List::isEmpty()
{
   return (getFirst() == NULL && getLast() == NULL)
}

int List::getSize() {
   return size;
}

int List::getFirstData() {
   return first->getData();
}

int List::getLastData() {
   return last->getData();
}

}
