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
#include "queue.h"

using namespace std;

bool empty_queue (struct queue *q)
{
   if (q->first == NULL && q->last == NULL)
      return true;

   return false;
}

void create_queue (struct queue *q)
{
   q->first = NULL;
   q->last = NULL;
}

void enqueue (struct queue *q, int data)
{
   struct node *aux;

   aux = new struct node;
   aux->data = data;
   if (empty_queue(q))
   {
      q->last = aux;
      aux->next = q->first;
      q->first = aux;
   }
   else
   {
      aux->next = NULL;
      q->last->next = aux;
      q->last = aux;
   }
}
    
int dequeue(struct queue *q)
{
   struct node *aux;
   int data;

   if (!empty_queue(q))
   {
      aux = q->first;
      q->first = q->first->next;
      data = aux->data;

      delete aux;

      if (q->first == NULL)
         q->last = NULL;
      
      return data;
   }
   else 
   {
      cout << "Fila vazia!" << endl;
      return -1;
   }
}

void print_first(struct queue *q)
{
   if (empty_queue(q))
      cout << "Fila vazia!" << endl;
   else
   {
      cout << "Primeiro é: " << q->first->data << endl;
   }
}
