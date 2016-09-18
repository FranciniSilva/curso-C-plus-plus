#include <iostream>

using namespace std;

int main(){

	cout << "Digite um número no intervalo de 45 e 72" << endl;
	int i = 0;
	cin >> i;

	if (i >= 45 && i <= 72){
	
		cout << "Obrigada por informar o número no intervalo solicitado" 
		     << endl;
		if (i == 45 || i == 72)
		
			cout << "O valor de i é igual ao valor de algum extremo!" 
			     << endl;
	}else
		cout << "O valor digitado não está no intervalo solicitado" 
			 << endl;
  	
	return 0;
}