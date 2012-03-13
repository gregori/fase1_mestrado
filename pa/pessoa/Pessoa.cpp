/*
 * =====================================================================================
 *
 *       Filename:  Pessoa.cpp
 *
 *    Description:  ex1 convertido para cpp
 *
 *        Version:  1.0
 *        Created:  12-03-2012 11:14:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */

#include "Pessoa.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(int diaN, int mesN, int anoN, char *nomeN)
{
    inicializa(diaN, mesN, anoN, nomeN);
}

Pessoa::Pessoa()
{
    inicializa(0, 0, 0);
}

void Pessoa::inicializa(int diaN, int mesN, int anoN, char *nomeN)
{
    dia = diaN;
    mes = mesN;
    ano = anoN;

    idade = 0;

    armazenaNome(nomeN);
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual)
{
    if (!(mes <= mesAtual && dia <= diaAtual))
        anoAtual--;

    idade = anoAtual - ano;
}

int Pessoa::informaIdade() // int getIdadE()
{
    return idade;
}

void Pessoa::imprimeIdade()
{
    cout << "A idade de " << nome << " seria " << idade << "." << endl;
}

void Pessoa::armazenaNome(char *nomeN)
{
    strcpy(nome, nomeN);
}
