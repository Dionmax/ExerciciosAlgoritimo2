// 02.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <locale.h>

using namespace std;

string figura_geometrica(int lados)
{
	switch (lados)
	{
	case 3:
		return "triângulo.";
		break;

	case 4:
		return "quadrado.";
		break;

	case 5:
		return "pentágono.";
		break;

	default:
		break;
	}
}

void entrada_lados()
{
	int lados;

	cout << "Quanto lados possui seu polígono? " << endl;
	cin >> lados;

	if (lados > 2 && lados < 6)
		cout << endl << "Seu polígono é um " << figura_geometrica(lados);
	else
		cout << endl << "Número inválido";
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	entrada_lados();

	cin.get();
	cin.get();

    return 0;
}

