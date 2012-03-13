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

Pessoa::Pessoa(int diaN, int mesN, int anoN, char *nomeN)
{
    dia = diaN;
    mes = mesN;
    ano = anoN;

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
    printf("A idade de %s seria %d.\n", nome, idade);
}

void Pessoa::armazenaNome(char *nomeN)
{
    strcpy(nome, nomeN);
}
