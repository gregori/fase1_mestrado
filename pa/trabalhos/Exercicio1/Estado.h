#ifndef _ESTADO_H_
#define _ESTADO_H_

#include "Lista.h"
#include "Cidade.h"
#include "PessoaFisica.h"

class Estado
{
private:
    char nome[30];
    char sigla[2];
    char regiao[12];
    Lista<Cidade> cidades;
    PessoaFisica* governador;

public:
    Estado();
    Estado(char* nome, char* sigla, char* regiao, PessoaFisica* eleito);
    ~Estado();
    char* informaNome();
    char* informaSigla();
    char* informaRegiao();
    void incluiCidade(Cidade* cidade);
    void adicionaGovernador(PessoaFisica* eleito);
    PessoaFisica* informaGovernador();
    void listaCidades();
};


#endif
