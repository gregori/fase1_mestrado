/*
 * =====================================================================================
 *
 *       Filename:  ex1.c
 *
 *    Description:  programa calculo de idade. ex1 fundamentos 2
 *
 *        Version:  1.0
 *        Created:  12-03-2012 10:48:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */


#include	<stdio.h>

struct Pessoa 
{
    int dia;
    int mes;
    int ano;
    int idade;
};

int calculaIdade(struct Pessoa p, int dia, int mes, int ano);

int main()
{
    struct Pessoa Einstein;
    struct Pessoa Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = calculaIdade(Einstein, 12, 3, 2012);
    Newton.idade = calculaIdade(Newton, 12, 3,  2012);

    printf("Einstein teria %d anos.\n", Einstein.idade);
    printf("Newton teria %d anos.\n", Newton.idade);

    return 0;
}

int calculaIdade(struct Pessoa p, int dia, int mes, int ano)
{
    int idade;
    if (!(p.mes <= mes && p.dia <= dia))
        ano--;
   
    idade = ano - p.ano;

    return idade;
}
