#include <iostream>

using namespace std;

int main() {

	
	char valores[5][5] = {};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			valores[i][j] = '*'; 
			cout << valores[i][j];
		}
		cout << endl; 
	}

	return 0;
}