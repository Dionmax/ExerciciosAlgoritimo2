// 01.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAMANHO = 10;

void valores_decrescente(int valores[])
{
	int aux;

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO - 1; cont2++)
		{
			aux = valores[cont2];

			if (valores[cont2] < valores[cont2 + 1])
			{
				valores[cont2] = valores[cont2 + 1];
				valores[cont2 + 1] = aux;
			}
		}

	cout << endl << endl << "Valores ordem decrescente:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << valores[cont] << ",";
}

void valores_crescente(int valores[])
{
	int aux;

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO - 1; cont2++)
		{
			aux = valores[cont2];

			if (valores[cont2] > valores[cont2 + 1])
			{
				valores[cont2] = valores[cont2 + 1];
				valores[cont2 + 1] = aux;
			}
		}

	cout << endl << endl << "Valores ordem crescente:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << valores[cont] << ",";
}

void randon_array()
{
	int numeros[TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		numeros[cont] = rand() % 100;

	cout << "Valores rais do vetor:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << numeros[cont] << ",";

	valores_crescente(numeros);

	valores_decrescente(numeros);

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	randon_array();

    return 0;
}

