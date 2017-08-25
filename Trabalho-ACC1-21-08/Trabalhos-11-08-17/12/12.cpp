// 12.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 6;

void matrizes_diagonal_seundaria()
{
	int matriz[TAMANHO][TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
		{
			if ((TAMANHO-1) - cont2 == cont)
				matriz[cont][cont2] = 1;
			else
				matriz[cont][cont2] = 0;
		}

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	cin.get();
	cin.get();
}

void matrizes_diagonal_principal()
{
	int matriz[TAMANHO][TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
		{
			if (cont == cont2)
				matriz[cont][cont2] = 1;
			else
				matriz[cont][cont2] = 0;
		}

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	cout << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	matrizes_diagonal_principal();
	matrizes_diagonal_seundaria();

    return 0;
}

