// 03.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string verificador(int numero)
{
	if (numero % 2 == 0)
		return "par.";
	else
		return "�mpar.";
}

void solicitacao()
{
	int numero;

	cout << "Insira um numero: ";

	cin >> numero;

	cout << "O numero inserido � " << verificador(numero);

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	solicitacao();

    return 0;
}

