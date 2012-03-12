#include <iostream>
#include <math.h>

using namespace std;

int primo(int n);

int main(void)
{
	int n;
	cout << "Numero? ";
	cin >> n;

	cout << primo(n) << '\n';
}

int primo(int n)
{
	int i;

	for (i = 2; i < n; i++)
		if (!(n%i))
			return 0;

	return 1;		
}
