#include <iostream>

using namespace std;

int main() {

	cout << "Digite um número qualquer" << endl;
	int valor = 0;
	cin >> valor;

	if (valor >= 50)
	{
		cout << "O valor digitado é maior que 50" << endl;
	} else
	 	cout << "O valor digitado é menor que 50" << endl;

	return 0;
}