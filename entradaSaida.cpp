#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "Informe um número: " << endl;
	int num1 = 0;
	cin >> num1;

	cout << "Informe outro númro: " << endl;
	int num2 = 0;
	cin >> num2;

	cout << "Os números digitados foram: "
		 << num1
		 << " e "
		 << num2
		 << endl;

	int soma = num1 + num2;

	cout << " A soma entre os valores digitados é "
	     << soma 
	     << endl;

	return 0;
}



	