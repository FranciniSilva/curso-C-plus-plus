#include <iostream>

using namespace std;

int main(){

	cout << "Digite um número correspondente a um mês do ano: " << endl;
	int num = 0;
    cin >> num;

	string mes = (num==1)? "Janeiro":
				 (num==2)? "Fevereiro":
				 (num==3)? "Março":
				 (num==4)? "Abril":
				 (num==5)? "Maio":
				 (num==6)? "Junho":
				 (num==7)? "Julho":
				 (num==8)? "Agosto":
				 (num==9)? "Setembro":
				 (num==10)? "Outubro":
				 (num==11)? "Novembro":
				 (num==12)? "Dezembro":	
				 "O valor digitado não corresponde a um mês do ano!";
	cout << mes << endl;

	return 0;
}