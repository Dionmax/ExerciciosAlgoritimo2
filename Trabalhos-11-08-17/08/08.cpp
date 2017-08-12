// 08.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 10;

double acima_media(double media, double numero_aprove)
{
	if (numero_aprove > media)
		return numero_aprove;
	else
		return -1;
}

double media(double numeros[])
{
	double total=0;

	for (int cont = 0; cont < TAMANHO; cont++)
		total += numeros[cont];

	return total / TAMANHO;
}

void pedido()
{
	double numeros[TAMANHO];

	cout << "Insira alguns numeros: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cin >> numeros[cont];

	cout << "A média foi : " << media(numeros) << endl;
	cout << "Os numeos acima da média foram: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		cout << acima_media(media(numeros) , numeros[cont]) << endl;

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

    return 0;
}

