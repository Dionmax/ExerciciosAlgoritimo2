// Desafio.pregui�oso.to.com.febre.2.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int bau = 1;
	cout << "J�aozinho abriu o ba� " << bau << endl;

	for (int cont = 2;cont < 6;cont ++)
	{
		bau += 2;

		cout << "J�aozinho abriu o ba� " << bau << endl;

		if (bau == 5)
		{
			bau -= cont;
			cout << "J�aozinho abriu o ba� " << bau << endl;
		}
	}

	cin.get();
	cin.get();
}
