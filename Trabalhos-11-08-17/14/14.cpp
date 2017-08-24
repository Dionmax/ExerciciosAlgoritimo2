// 14.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAMANHO = 5;

void matrizes()
{
	int matriz[TAMANHO][TAMANHO],
		diagonal_principal[TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			matriz[cont][cont2] = rand() % 100;

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			if (cont == cont2)
			{
				diagonal_principal[cont] = matriz[cont][cont2];
			}


	cout << endl << "Numeros da diagonal principal:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout<< diagonal_principal[cont] << "   ";

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

