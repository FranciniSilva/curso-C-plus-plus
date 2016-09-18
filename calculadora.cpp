#include <iostream>

using namespace std;

int main() {

	double num1, num2, soma, sub, multi, div;

	cout << "Seja bem vindo a nossa primeira calculadora " << endl;
	cout << "Digite o primeiro número: " << endl;
	cin >> num1;
	cout << "Digite o segundo número: " << endl;
	cin >> num2;


	soma 	= num1 + num2;
	sub 	= num1 - num2;
	multi 	= num1 * num2;
	div 	= num1 / num2;

	cout << "A soma é: " << soma << endl;
	cout << "A subtração é: " << sub << endl;
	cout << "A multiplicação é: " << multi << endl;
	cout << "A div  é: " << div << endl;


	return 0;
}