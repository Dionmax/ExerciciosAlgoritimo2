// 09.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

void pedido()
{
	int numero;

	bool primo;

	cout << "Números primos até qual valor: ";
	cin >> numero;

	for (int cont = 2; cont <= numero; cont++)
	{
		primo = false;

		for (int cont2 = 2; cont2 < cont; cont2++)
		{
			if (cont % cont2 == 0)
				primo = true;
		}

		if (!primo)
			cout << cont << endl;
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

