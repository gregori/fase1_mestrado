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

Pessoa::Pessoa(int diaN, int mesN, int anoN)
{
    dia = diaN;
    mes = mesN;
    ano = anoN;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual)
{

