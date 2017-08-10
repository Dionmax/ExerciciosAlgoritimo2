// 08.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

void pedido()
{
	int numero,
		total_par=0,
		total_impar=0;

	cout << "Insira um numero: ";
	cin >> numero;

	cout << "Numeros pares: " << endl;
	for (int cont = 1; cont < numero; cont++)
	{
		if (cont % 2 == 0)
		{
			cout << cont << ",";
			total_par += cont;
		}
	}

	cout << "\nTotal resultado par: " << total_par << endl;

	cout << "Numeros ímpares: " << endl;
	for (int cont = 1; cont < numero; cont++)
	{
		if (cont % 2 != 0)
		{
			cout << cont << ",";
			total_impar += cont;
		}
	}

	cout << "\nTotal resultado ímpar: " << total_impar << endl;

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

    return 0;
}

