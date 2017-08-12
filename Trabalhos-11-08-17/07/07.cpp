// 07.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 5;

void simples()
{
	int numeros[TAMANHO];

	cout << "Digite " << TAMANHO << " números:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cin >> numeros[cont];

	system ("cls");

	cout << "Os números digitados foram: " << endl;

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

