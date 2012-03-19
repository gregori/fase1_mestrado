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
#include "list.h"

using namespace std;

bool empty_list (struct list *list)
{
   if (list->first == NULL && list->last == NULL)
      return true;

   return false;
}

void create_list (struct list *list)
{
   list->first = NULL;
   list->last = NULL;
   list->size = 0;
}

void insert_first (struct list *list, int data) 
{
   struct node *aux;

   aux = new struct node;
   aux->data = data;

   if (empty_list(list))
      list->last = aux;

   aux->next = list->first;
   list->first = aux;
   list->size++;
}

void insert_last (struct list *list, int data)
{
   struct node *aux;

   if (empty_list(list))
      insert_first(list, data);
   else
   {
      aux = new struct node;
      aux->data = data;
      aux->next = NULL;
      list->last->next = aux;
      list->last = aux;
      list->size++;
   }
}
   
int remove_last (struct list *list)
{
   struct node *penultimate;
   int data;

   if (!empty_list(list))
   {
      penultimate = list->first;

      while (penultimate->next != list->last)
         penultimate = penultimate->next;

      // we found the penultimate element
      penultimate->next = NULL; 
      data = list->last->data;
      delete list->last;
      list->last = penultimate;
      list->size--;

      return data;
   }
   else 
   {
      cout << "Lista vazia!" << endl;
      return -1;
   }
}
    
int remove_first (struct list *list)
{
   struct node *aux;
   int data;

   if (!empty_list(list))
   {
      aux = list->first;
      list->first = list->first->next;
      data = aux->data;

      delete aux;
      list->size--;
      
      return data;
   }
   else 
   {
      cout << "Lista vazia!" << endl;
      return -1;
   }
}

void print_list(struct list *list)
{
   struct node *aux;
   int i = 0;

   if (empty_list(list))
      cout << "Lista vazia!" << endl;
   else
   {
      cout << "Tamanho da lista: " << list->size << endl;
      cout << "Topo contém: " << list->first->data << endl;
      cout << "Endereço do topo: " << list->first << endl;

      for (aux = list->first; aux != NULL; aux = aux->next)
      {
         cout << "Nó " << i++ << ": " << endl;
         cout << "Endereço: " << aux;
         cout << " Valor: " << aux->data << " End. próximo: " << aux->next << endl;
         cout << "--------------------------------" << endl;
      }
   }
}
