#include "Principal.h"

Principal::Principal()
{
    Einstein.inicializa(14, 3, 1979, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");
    Executar();
}

void Principal::Executar()
{
    Einstein.calculaIdade(12, 3, 2012);
    Newton.calculaIdade(12, 3, 2012);
}
