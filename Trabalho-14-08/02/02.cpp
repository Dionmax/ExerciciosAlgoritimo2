// 02.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAMANHO = 4;

void matriz_decrescente(int matriz[][TAMANHO])
{
	int aux;

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			for (int cont3 = 0; cont3 < TAMANHO - 1; cont3++)
			{
				aux = matriz[cont2][cont3];

				if (matriz[cont2][cont3] < matriz[cont2][cont3 + 1])
				{
					matriz[cont2][cont3] = matriz[cont2][cont3 + 1];
					matriz[cont2][cont3 + 1] = aux;
				}
			}

	cout << endl << "Matriz com os valores em ordem decrescente:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}
}

void matriz_crescente(int matriz[][TAMANHO])
{
	int aux;

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			for (int cont3 = 0; cont3 < TAMANHO - 1; cont3++)
			{
				aux = matriz[cont2][cont3];

				if (matriz[cont2][cont3] > matriz[cont2][cont3 + 1])
				{
					matriz[cont2][cont3] = matriz[cont2][cont3 + 1];
					matriz[cont2][cont3 + 1] = aux;
				}
			}

	cout << endl << "Matriz com os valores em ordem crescente:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}
}

void random_matriz()
{
	int matriz[TAMANHO][TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			matriz[cont][cont2] = rand() %100;

	cout << "Matriz com os valores reais:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	matriz_crescente(matriz);

	matriz_decrescente(matriz);

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	random_matriz();

    return 0;
}

