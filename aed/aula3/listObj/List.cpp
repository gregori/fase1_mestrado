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

List::Node::Node(int d) {
   data = d;
   next = NULL;
   prev = NULL;
   size = 0;
}

List::Node::~Node() {
   next = NULL;
   prev = NULL;
}

void List::Node::setNext(List::Node *n) {
   next = n;
}

void List::Node::setPrev(List::Node *p) {
   prev = p;
}

List::Node* List::Node::getNext() {
   return next;
}

List::Node* List::Node::getPrev() {
   return prev;
}

void List::Node::setData(int d) {
   data = d;
}

int List::Node::getData() {
   return data;
}

List::List() {
   first = NULL;
   last = NULL;
}

List::~List() {
   //TODO: Esvaziar lista
}

void List::setFirst(List::Node *f) {
   first = f;
}

List::Node* List::getFirst() {
   return first;
}

void List::setLast(List::Node *l) {
   last = l;
}

List::Node* List::getLast() {
   return last;
}

void List::insertFirst (int d) 
{
   List::Node *aux;

   aux = new List::Node(d);

   if (isEmpty())
      last = aux;

   aux->setNext(first);
   setFirst(aux);
   size++;
}

void List::insertLast (int d)
{
   List::Node *aux, *l;

   if (isEmpty())
      insertFirst(d);
   else
   {
      aux = new List::Node(d);
      aux->setNext(NULL);
      l = getLast();
      l->setNext(aux);
      setLast(aux);
   }
   size++;
}

int List::removeLast ()
{
   List::Node *penultimate, *aux, *f;
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
   List::Node *aux, *f;
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

void List::printList()
{
   List::Node *aux;
   int i = 0;

   if (isEmpty())
      cout << "Lista vazia!" << endl;
   else
   {
      cout << "Tamanho da lista: " << getSize() << endl;
      cout << "Topo contém: " << first->getData() << endl;
      cout << "Endereço do topo: " << first << endl;

      for (aux = first; aux != NULL; aux = aux->getNext())
      {
         cout << "Nó " << i++ << ": " << endl;
         cout << "Endereço: " << aux;
         cout << " Valor: " << aux->getData() << " End. próximo: " << aux->getNext << endl;
         cout << "--------------------------------" << endl;
      }
   }
}
