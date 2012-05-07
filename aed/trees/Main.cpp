/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description:  Main class for the Tree
 *
 *        Version:  1.0
 *        Created:  05/05/2012 23:53:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  UTFPR
 *
 * =====================================================================================
 */
#include <iostream>

#include "Main.h"

using namespace std;

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Main
 *      Method:  Main
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
Main::Main ()
{

}  /* -----  end of method Main::Main  (constructor)  ----- */

Main::~Main()
{

}

    void
Main::execute ( )
{
    int op;

    do 
    {
        cout << "Árvores Binárias de Busca" << endl;
        cout << endl;
        cout << "Escolha uma opção:" << endl;
        cout << "1 - Inserir um nó" << endl;
        cout << "2 - Remover um nó" << endl;
        cout << "3 - Imprimir Árvore" << endl;
        cout << "4 - Sair do programa" << endl;
        cout << "opção: ";
        cin >> op;
        
        treatOption(op);

    } while (op != 4);
}		/* -----  end of method Main::execute  ----- */

    void
Main::treatOption ( int option )
{
    switch (option)
    {
        case 1:
            insertNode();
            break;

        case 2:
            removeNode();
            break;

        case 3:
            printTree();
            break;

        case 4:
            break;

        default:
            cout << "Digite um número entre 1 e 4!" << endl;
            break;
    }
}		/* -----  end of method Main::treatOption  ----- */



    void
Main::insertNode (  )
{
    int val;
    cout << "Informe o valor a inserir: ";
    cin >> val;

    tree.insert(val);

    cout << "Valor inserido!" << endl;
}		/* -----  end of method Main::insertNode  ----- */


    void
Main::removeNode (  )
{
    int val;
    cout << "Informe a valor a remover: ";
    cin >> val;

    val = tree.remove(val);

    cout << "Valor " << val << " removido!" << endl;
}		/* -----  end of method Main::removeNode  ----- */


    void
Main::printTree (  )
{
    tree.printTree();
}		/* -----  end of method Main::printTree  ----- */




