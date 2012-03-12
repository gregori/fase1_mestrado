#include <iostream>

using namespace std;

int main(void)
{
	int i, v, media;
	int soma = 0;

	for (i = 1; i < 11; i++)
	{
		cout << "Entre com o valor " << i << ": ";
		cin >> v;
		soma += v;
	}

	media = soma / 10;

	cout << "A média é: " << media;

	return 0;
}	
