// Desafio.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int bau = 1;
	cout << "Jõaozinho abriu o baú " << bau << endl;

	while (bau != 6)
	{
		bau += 2;

		cout << "Jõaozinho abriu o baú " << bau << endl;

		if (bau == 5)
		{
			bau -= 3;
			cout << "Jõaozinho abriu o baú " << bau << endl;
		}
	}

	cin.get();
	cin.get();
}

