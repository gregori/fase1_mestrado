#ifndef _PESSOA_H_
#define _PESSOA_H_

#include "Endereco.h"
#include "Data.h"
#include "Lista.h"
#include "Elemento.h"

class Pessoa
{
private:
    char nome[50];
    char sexo[10];
    Data* dataNascimento;
    Pessoa* mae;
    Pessoa* pai;
    Endereco* endereco;
    Pessoa* conjuge;
    Lista<Pessoa> filhos;

public:
    Pessoa(char* nomeP, char* sexoP, Data* dataNascimentoP, Pessoa* maeP, Pessoa* paiP, Endereco* enderecoP, Pessoa* conjugeP);
    Pessoa();
    ~Pessoa();
    int calculaIdade(Data& dataAtual);
    bool temFilhos();
    bool temConjuge();
    bool eHomem();
    bool eMulher();
    Pessoa* informaConjuge();
    void listaFilhos();
    void adicionaConjuge(Pessoa* conjuge);
    void adicionaFilho(Pessoa* filho);
    void adicionaGenitor(Pessoa* genitor);
    void adicionaEndereco(char* logradouro, int numero, char* complemento,
            int cep, Cidade* cidade, Estado* estado, Pais* pais);
    void adicionaEndereco(Endereco* enderecoP);
};


#endif
