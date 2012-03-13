#include "Pessoa.h"
#include <stdio.h>

int main()
{
    Pessoa Einstein(14, 3, 1879);
    Pessoa Newton(4, 1, 1643);
    
    Einstein.calculaIdade(12, 3, 2012);
    Newton.calculaIdade(12, 3, 2012);
    
    printf("Einstein teria %d \n", Einstein.informaIdade());
    printf("Newton teria %d \n", Newton.informaIdade());

    return 0;
}
