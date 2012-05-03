#ifndef _ENDERECO_H_
#define _ENDERECO_H_

class Endereco
{
private:
    char logradouro[100];
    int numero;
    char complemento[50];
    int cep;
    char bairro[50];
    Cidade* cidade;
    Estado* estado;
    Pais* pais;

public:
};
