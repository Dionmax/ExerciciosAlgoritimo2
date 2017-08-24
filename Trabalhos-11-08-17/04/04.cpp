// 04.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 10;

void pedido()
{
	int numeros,
		menor = 0,
		maior = 0;

	cout << "Digite 10 números:" << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		cin >> numeros;

		if (numeros < menor || cont == 0)
			menor = numeros;

		if (numeros > maior || cont == 0)
			maior = numeros;
	}

	cout << "O menor numero digitado foi: " << menor << endl;
	cout << "O maior numero digitado foi: " << maior;

	cin.get();
	cin.get();
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

	return 0;
}

