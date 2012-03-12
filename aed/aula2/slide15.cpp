#include <iostream> 
using namespace std;

int media (int *lista, int tamanho);

int main(void)
{
    const int MAXI=20;
    int notas[MAXI];
    int i;

    for (i = 0; i<MAXI; i++)
    {
        cout << "Digite a nota do aluno  " << (i+1) << ": ";
        cin >> *(notas+i);
        if (*(notas+i) <0) break;
    }
    int m = media(notas, i);
    cout << "\n\nMédia das notas: " << m;

    return 0;
}

int media (int *lista, int tamanho)
{
    int m = 0;
    int j;
    for (j=0; j < tamanho; j++) 
        m += *(lista++);
    return (m/tamanho);
}
