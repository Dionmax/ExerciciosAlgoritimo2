// 07.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 5;

void simples()
{
	int numeros[TAMANHO];

	cout << "Digite " << TAMANHO << " n�meros:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cin >> numeros[cont];

	system ("cls");

	cout << "Os n�meros digitados foram: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << numeros[cont] << endl;

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	simples();

    return 0;
}

