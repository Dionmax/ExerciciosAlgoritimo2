// Trabalhos-07-08.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int verificacao(int numero)
{
	if (numero < 0)
		return numero *= -1;
	else
		return numero;
}

void pedido()
{
	int numero;

	cout << "Insira um n�mero inteiro:";

	cin >> numero;

	cout << "O n�mero inserido foi: " << verificacao(numero);
	 
	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

    return 0;
}