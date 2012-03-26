#include <iostream>
#include "string.h"
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    nome = "";
    sexo = "";
    dataNascimento = NULL;
    mae = NULL;
    pai = NULL;
    endereco = NULL;
}

Pessoa::Pessoa(char* nomeP, char* sexoP, Data* dataNascimentoP, Pessoa* maeP,
        Pessoa* paiP, Endereco* enderecoP, Pessoa* conjugeP)
: Filhos();
{
    strcpy(nome, nomeP);
    strcpy(sexo, sexoP);
    dataNascimento = dataNascimentoP;
    adicionaGenitor(maeP);
    adicionaGenitor(paiP);
    adicionaEndereco(enderecoP);
    adicionaConjuge(conjugeP);
}

Pessoa::~Pessoa()
{
    nome = NULL;
    sexo = NULL;
    dataNascimento = NULL;
    mae = NULL;
    pai = NULL;
    conjuge = NULL;
    delete endereco;
}

Pessoa* Pessoa::informaConjuge()
{
    return conjuge;
}

bool Pessoa::temConjuge()
{
    return conjuge != NULL;
}

void Pessoa::adicionaFilho(Pessoa* filho)
{
    filhos.adicionaInfo(filho);
}

bool Pessoa::temFilhos()
{
    return !(filhos.estaVazia());
}

bool Pessoa::eHomem()
{
    return (strcmp(sexo, "Masculino") == 0);
}

bool Pessoa::eMulher()
{
    return (strcmp(sexo, "Feminino") == 0);
}

int Pessoa::calculaIdade(Data& dataAtual)
{
    return dataNascimento.diferencaAnos(dataAtual);
}

void Pessoa::adicionaGenitor(Pessoa* genitor)
{
    if (genitor->eHomem())
        pai = genitor;
    else
        mae = genitor;
}

void Pessoa::adicionaEndereco(char* logradouro, int numero, char* complemento,
        int cep, Cidade* cidade, Estado* estado, Pais* pais)
{
    endereco = new Endereco(logradouro, numero, complemento, cep, cidade,
            estado, pais);
}

void Pessoa::adicionaEndereco(Endereco* enderecoP)
{
    endereco = enderecoP;
}
