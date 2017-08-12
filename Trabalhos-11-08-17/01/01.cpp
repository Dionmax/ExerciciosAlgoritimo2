// 01.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 50;

void contador()
{
	for (int cont = 0; cont <= TAMANHO; cont++)
	{
		cout << cont << endl;
	}

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	contador();

    return 0;
}

