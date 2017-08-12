// 03.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int fibonacci(int numero)
{
	if (numero == 1 || numero == 2)
		return 1;
	else
		return fibonacci(numero - 1) + fibonacci(numero - 2);
}

void pedido()
{
	int numero;
	cout << "Fibonacci! Digite um numero: ";

	cin >> numero;

	cout << "A Sequencia de Fibonacci a partir do numero escolhido é: ";

	for (int cont = 0; cont < numero; cont++)
	{
		cout << fibonacci(cont + 1) << ",";
	}

	cin.get();
	cin.get();
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

	return 0;
}

