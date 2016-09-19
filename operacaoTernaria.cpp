#include <iostream>

using namespace std;

int main() {

	cout << "Digite um número" << endl;
	int i = 0;
	cin >> i;

	string texto = (i <= 10) ? "menor que dez" : "maior que dez"; 

	cout << "O valor digitado anteriormente é " << texto << endl;

	return 0;
}