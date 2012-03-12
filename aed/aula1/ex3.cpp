#include <iostream>

using namespace std;

void troca(float& n, float& m)
{
	float temp = n;
	n = m;
	m = temp;
}

int main(void)
{
	float v[3];
	int i,j;
	for (i = 0; i < 3; i++)
	{
		cout << "Entre o valor " << i+1 << ": ";
		cin >> v[i];
	}

	for (j = 0; j < 3; j++)
		for (i = 0; i < 2; i++)
			if (v[i] > v[i+1])
				troca(v[i], v[i+1]);

	for (i = 0; i < 3; i++)
		cout << v[i] << '\n';

	return 0;
}
	
	
