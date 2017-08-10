// Trabalhos-07-08.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int verificacao(int numero)
{
	if (numero < 0)
	{
		return numero *= -1;
	}
	else
	{
		return numero;
	}
}

void pedido()
{
	int numero;

	cout << "Insira um numero inteiro:";

	cin >> numero;

	cout << "O número inserido foi: " << verificacao(numero);
	 
	cin.get();
	cin.get();
}

int main()
{
	
	pedido();

    return 0;
}

