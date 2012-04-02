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
#include "queue.h"

using namespace std;

void print_menu()
{
   cout << "Filas" << endl;
   cout << endl;
   cout << "1. Adicionar à fila" << endl;
   cout << "2. Retirar da Fila" << endl;
   cout << "3. Consulta primeiro" << endl;
   cout << "4. Sair" << endl;
   cout << endl;
}

int main()
{
   int option, data;
   struct queue *q;

   q = new struct queue();

   create_queue(q);

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
            cout << "Valor a inserir: ";
            cin >> data;
            enqueue(q, data);
            break;
         case 2:
            data = dequeue(q);
            if (data >=0) cout << "Valor " << data << " removido!" << endl;
            break;
         case 3:
            print_first(q);
            break;
      }
   } while (option < 4);
}
