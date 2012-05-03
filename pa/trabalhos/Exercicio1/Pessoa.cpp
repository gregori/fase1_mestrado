#include <iostream>
#include "string.h"
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
: filhos()
{
    nome = "";
    sexo = "";
    dataNascimento = NULL;
    mae = NULL;
    pai = NULL;
    endereco = NULL;
    conjuge = NULL;
}

Pessoa::Pessoa(char* nomeP, char* sexoP, Data* dataNascimentoP, Pessoa* maeP,
        Pessoa* paiP, Endereco* enderecoP, Pessoa* conjugeP)
: filhos()
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
    endereco = NULL;
    delete filhos;
}

int Pessoa::calculaIdade(Data& dataAtual)
{
    return dataNascimento.diferencaAnos(dataAtual);
}

bool Pessoa::temFilhos()
{
    return !(filhos.vazia());
}

bool Pessoa::temConjuge()
{
    return conjuge != NULL;
}

bool Pessoa::eHomem()
{
    return (strcmp(sexo, "Masculino") == 0);
}

bool Pessoa::eMulher()
{
    return (strcmp(sexo, "Feminino") == 0);
}

Pessoa* Pessoa::informaConjuge()
{
    return conjuge;
}

void Pessoa::adicionaConjuge(Pessoa* conjuge)
{
    this.conjuge = conjuge;
}

void Pessoa::adicionaFilho(Pessoa* filho)
{
    filhos.adicionaInfo(filho);
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

void Pessoa::listaFilhos()
{
    if (filhos.vazia())
        cout << "Não possui filhos!" << endl;
    else
        for(Elemento<Pessoa>* p = filhos.informaPrimeiro(); p = NULL; p = p->informaProximo())
        {
            Pessoa* filho = p->informaInfo();
            cout << "Filho : " << filho->informaNome() << endl;
        }
}
