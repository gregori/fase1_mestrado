/*
 * =====================================================================================
 *
 *       Filename:  Pessoa.h
 *
 *    Description:  Ex1 convertido pra C++, headers
 *
 *        Version:  1.0
 *        Created:  12-03-2012 11:08:26
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Rodrigo Mello Mattos Habib Gregori (rmmhg), rodrigo.gregori@gmail.com
 *        Company:  UTFPR
 *
 * =====================================================================================
 */


class Pessoa
{
    private:
        int dia;
        int mes;
        int ano;
        int idade;
        char nome[30];

    public:
        Pessoa(int diaN, int mesN, int anoN, char *nomeN = "");
        Pessoa();
        void inicializa(int diaN, int mesN, int anoN, char *nomeN = "");
        void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
        int informaIdade(); // int getIdade
        void imprimeIdade();
        void armazenaNome(char *nomeN);
};
