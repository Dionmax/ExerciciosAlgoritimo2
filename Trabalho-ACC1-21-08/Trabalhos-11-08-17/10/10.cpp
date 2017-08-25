// 10.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAMANHO = 50;

int quantidade_impares(int numeros[])
{
	int impares = 0;

	for (int cont = 0; cont < TAMANHO; cont++)
		if (numeros[cont] % 2 != 0)
			impares++;

	return impares;
}

int indice_menor_valor(int numeros[])
{
	int menor = 0,
		indice = 0;

	for (int cont = 0; cont < TAMANHO; cont++)
		if (numeros[cont] < menor || cont == 0)
		{
			menor = numeros[cont];
			indice = cont;
		}

	return indice;
}

int menor_valor(int numeros[])
{
	int menor = 0;

	for (int cont = 0; cont < TAMANHO; cont++)
		if (numeros[cont] < menor || cont == 0)
			menor = numeros[cont];

	return menor;
}

void varios()
{
	int array_numeros[TAMANHO];

	for (int cont = 0; cont < TAMANHO; cont++)
		array_numeros[cont] = rand() % 120;

	cout << "Numeros sortiados:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << array_numeros[cont] << endl;

	cout << endl << "O menor numero sortiado foi: " << menor_valor(array_numeros) << endl;

	cout << "O indíce do menor numero sortiado foi: " << indice_menor_valor(array_numeros) << endl;

	cout << "Existe no total " << quantidade_impares(array_numeros) << " números ímpares no array." << endl;

	cout << "Esses são todos números pares contido no array:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		if (array_numeros[cont] % 2 == 0)
			cout << array_numeros[cont] << ",";

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	varios();

    return 0;
}

