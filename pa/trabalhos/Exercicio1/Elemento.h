#ifndef _ELEMENTO_H_
#define _ELEMENTO_H_

template<class Tipo>
class Elemento
{
private:
    Elemento<Tipo>* proximo;
    Elemento<Tipo>* anterior;
    Tipo* info;

public:
    Elemento();
    ~Elemento();

    void adicionaProximo(Elemento<Tipo>* prox);
    Elemento<Tipo>* informaProximo();

    void adicionaAnterior(Elemento<Tipo>* ant);
    Elemento<Tipo>* informaAnterior();

    void adicionaInfo(Tipo* inf);
    Tipo* informaInfo();
};

template<class Tipo>
Elemento<Tipo>::Elemento()
{
    proximo = NULL;
    anterior = NULL;
    info = NULL;
}

template<class Tipo>
void Elemento<Tipo>::adicionaProximo(Elemento<Tipo>* prox)
{
    proximo = prox;
}

template<class Tipo>
Elemento<Tipo>* Elemento<Tipo>::informaProximo()
{
    return proximo;
}

template<class Tipo>
void Elemento<Tipo>::adicionaAnterior(Elemento<Tipo>* ant)
{
    anterior = ant;
}

template<class Tipo>
Elemento<Tipo>* Elemento<Tipo>::informaAnterior()
{
    return anterior;
}

template
