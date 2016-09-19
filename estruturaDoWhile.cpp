#include <iostream>

using namespace std;

int main() {

	int i = 0;
	cout << "Looping DO-WHILE" << endl;
	do{
		i++;
		cout << "O valor de i é: " << i << endl;

	}while(i < 10);


	cout << "Looping WHILE" << endl;
	int i2 = 10;
	while(i2 >= 10 && i2 <= 20){
		i2++;
		cout << "O valor da variavel i2 é: " << i2 << endl;
	}




	return 0;
}