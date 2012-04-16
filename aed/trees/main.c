/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main code for testing purposes
 *
 *        Version:  1.0
 *        Created:  19-03-2012 10:52:40
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

void print_menu()
{
   cout << "Pilhas seqüenciais" << endl;
   cout << endl;
   cout << "1. Empilhar" << endl;
   cout << "2. Desempilhar" << endl;
   cout << "3. Consulta topo" << endl;
   cout << "4. Sair" << endl;
   cout << endl;
}

int main()
{
   int option, data;
   struct stack s;

   create_stack(s);

   do
   {
      do
      {
         print_menu();
         cout << "Escolha uma opção: ";
         cin >> option;
      } while (option < 1 && option > 4);


      switch (option)
      {
         case 1:
            cout << "Valor a empilhar: ";
            cin >> data;
            push(s, data);
            break;
         case 2:
            data = pop(s);
            if (data >=0) cout << "Valor " << data << " desempilhado!" << endl;
            break;
         case 3:
            print_top(s);
            break;
      }
   } while (option < 4);
}
