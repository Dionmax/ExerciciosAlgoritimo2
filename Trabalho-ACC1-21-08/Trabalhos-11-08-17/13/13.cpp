// 13.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int 
	LINHA = 3,
	COLUNA = 5,
	TAMANHO_NUMERO = 100;

void matrizes()
{
	int matriz[LINHA][COLUNA];

	for (int cont = 0; cont < LINHA; cont++)
		for (int cont2 = 0; cont2 < COLUNA; cont2++)
			matriz[cont][cont2] = rand() % 500;

	for (int cont = 0; cont < LINHA; cont++)
	{
		for (int cont2 = 0; cont2 < COLUNA; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	cout << endl;
	cout << endl;


	for (int cont = 0; cont < LINHA; cont++)
		for (int cont2 = 0; cont2 < COLUNA; cont2++)
		{
			if (matriz[cont][cont2] < TAMANHO_NUMERO)
				matriz[cont][cont2] = 0;
		}

	for (int cont = 0; cont < LINHA; cont++)
	{
		for (int cont2 = 0; cont2 < COLUNA; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	matrizes();

    return 0;
}

