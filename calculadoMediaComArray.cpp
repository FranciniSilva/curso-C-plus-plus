#include <iostream>

using namespace std;

int main(){

	double val[4];

	for (int i = 0; i <= 4; i++)
	{
		cout << "Informe o " << i+1 << " valor." << endl;
		cin >> val[i];
	}

	double soma = 0;
	for (int j = 0; j <= 4; j++)
	{
		//soma = soma + val[j];
		soma += val[j];
	}

	cout << fixed;
	cout << "A média é " << (soma / 5) << endl;
	return 0;
}