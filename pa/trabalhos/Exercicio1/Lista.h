#ifndef _LISTA_H_
#define _LISTA_H_

#include "Elemento.h"

template<class Tipo>
class Lista
{
private:
    Elemento<Tipo>* primeiro;
    Elemento<Tipo>* ultimo;

public:
    Lista();
    ~Lista();
    void inicializa();
    bool adicionaElemento(Elemento<Tipo>* elemento);
    bool adicionaInfo(Tipo* info);
    bool vazia();
};

template<class Tipo>
Lista<Tipo>::Lista()
{
    inicializa();
}

template<class Tipo>
Lista<Tipo>::~Lista()
{
}

template<class Tipo>
void Lista<Tipo>::inicializa()
{
    primeiro = NULL;
    ultimo = NULL;
}

template<class Tipo>
bool Lista<Tipo>::adicionaElemento(Elemento<Tipo>* elemento)
{
    if (NULL != elemento)
    {
        if (NULL == primeiro)
        {
            primeiro = elemento;
            ultimo = primeiro;
        }
        else
        {
            elemento->adicionaAnterior(ultimo);
            elemento->adicionaProximo(NULL);
            ultimo->adicionaProximo(elemento);
            atual = atual->informaProximo();
        }
        return true;
    }
    else
    {
        cout << "Erro, não é possível inserir elemento nulo na lista." << endl;
        return false;
    }
}

template<class Tipo>
bool Lista<Tipo>::adicionaInfo(Tipo* info)
{
    if (NULL != info)
    {
        Elemento<Tipo>* elemento;
        elemento = new Elemento<Tipo>();
        elemento->adicionaInfo(info);
        adicionaElemento(elemento);

        return true;
    }
    else
    {
        cout << "Erro, não é possível inserir elemento nulo na lista." << endl;
        return false;
    }
}

template<class Tipo>
bool vazia()
{
    return primeiro == ultimo == NULL;
}
