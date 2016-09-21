#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	double plan[5][6] = {};

	//gerando planilha
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			plan[x][y] = (double)rand() + (RAND_MAX / 100 );			
		}
	}

	//calculo dos valores
	double total = 0;
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			plan[x][5] += plan[x][y];			
		}
		total += plan[x][5];
	}

	//imprimindo a planilha
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			string end = (y < 4) ? ", " :
						 (y < 5) ? " = " : "\n";
			cout << plan[x][y] << end;		
		}
	}


	cout << "O valor da soma é: " << total << endl;
	return 0;
}