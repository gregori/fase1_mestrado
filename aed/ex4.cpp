#include <iostream>

#define IMPAR(n) (n % 2)

using namespace std;

int main(void)
{
	int n;
	cout << "Numero? ";
	cin >> n;

	cout << IMPAR(n) << '\n';
}
