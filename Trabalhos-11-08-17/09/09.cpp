// 09.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAMANHO = 10;

void pedido()
{
	int n_um[TAMANHO],
		n_dois[TAMANHO],
		n_resul[TAMANHO];

	cout << "Numeros gerados aleatóriamente: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		n_um[cont] = rand() % 10;

	cout << "Os numeros aleatorio gerado para o array um foram: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << n_um[cont] << " ";

	for (int cont = 0; cont < TAMANHO; cont++)
		n_dois[cont] = rand() % 10;

	cout << endl << "Os numeros aleatorio gerado para o array dois foram: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << n_dois[cont] << " ";

	for (int cont = 0; cont < TAMANHO; cont++)
		n_resul[cont] = n_um[cont] * n_dois[cont];

	cout << endl << "O resultado da multiplicação dos números foram: " << endl;
	
	for (int cont = 0; cont < TAMANHO; cont++)
		cout << n_resul[cont] << endl;

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time (NULL));

	pedido();

    return 0;
}

