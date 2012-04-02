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
#include "stack_seq.h"

using namespace std;

bool is_empty_stack(struct stack &s)
{
   if (s.top == -1)
      return true;

   return false;
}

bool is_full_stack(struct stack &s)
{
   return (s.size == s.end);
}

void create_stack (struct stack &s)
{
   s.top = -1;
   s.end = 5;
   s.size = 0;
}

void push(struct stack &s, int data)
{
  if(is_full_stack(s))
     cout << "Pilha cheia!" << endl;
  else
  {
     s.stack[++s.top] = data;
     s.size++;
     cout << endl << "Valor empilhado!" << endl;
  }   
}

  
int pop(struct stack &s)
{
   int data;

   if (is_empty_stack(s))
   {
      cout << "Pilha Vazia!" << endl;
      return -1;
   }
   else
   {   
      data = s.stack[s.top--];
      s.size--;
      return data;
   }
}

void print_top(struct stack &s)
{
   if (is_empty_stack(s))
      cout << "Pilha vazia!" << endl;
   else
      cout << "Topo contém: " << s.stack[s.top] << endl;
}
