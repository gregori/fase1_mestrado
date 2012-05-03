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
#include "List.h"

using namespace std;

void print_menu()
{
   cout << "Listas encadeadas" << endl;
   cout << endl;
   cout << "1. Incluir no início da lista" << endl;
   cout << "2. Incluir no fim da lista" << endl;
   cout << "3. Remover do início da lista" << endl;
   cout << "4. Remover do fim da lista" << endl;
   cout << "5. Imprimir detalhes da lista" << endl;
   cout << "6. Sair" << endl;
   cout << endl;
}

int main()
{
   int option, data;
   List *list;

   list = new List();

   do
   {
      do
      {
         print_menu();
         cout << "Escolha uma opção: ";
         cin >> option;
      } while (option < 1 && option > 6);


      switch (option)
      {
         case 1:
            cout << "Valor a inserir na lista: ";
            cin >> data;
            list->insertFirst(data);
            cout << endl << "Valor inserido!" << endl;
            break;
         case 2:
            cout << "Valor a inserir na lista: ";
            cin >> data;
            list->insertlast(data);
            cout << endl << "Valor inserido!" << endl;
            break;
         case 3:
            data = list->removeFirst();
            if (data >=0) cout << "Valor " << data << " removido!" << endl;
            break;
         case 4:
            data = list->removeLast();
            if (data >=0) cout << "Valor " << data << " removido!" << endl;
            break;
         case 5:
            list->printList(list);
            break;
      }
   } while (option < 6);
}
