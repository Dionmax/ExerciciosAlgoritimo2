// DesafioLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <stack>

#include "SuporteBusca.h"

using namespace std;

void representacao_matriz(int matriz[][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
			cout << matriz[linha][coluna] << "	|";

		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];

	prencher_matriz(matriz, 1, 2);
	prencher_matriz(matriz, 1, 3);
	prencher_matriz(matriz, 2, 3);
	prencher_matriz(matriz, 2, 4);
	prencher_matriz(matriz, 2, 5);
	prencher_matriz(matriz, 3, 1);
	prencher_matriz(matriz, 3, 2);
	prencher_matriz(matriz, 3, 5);
	prencher_matriz(matriz, 4, 6);
	prencher_matriz(matriz, 5, 2);
	prencher_matriz(matriz, 6, 5);

	representacao_matriz(matriz);

	buscar_caminhos(matriz, 0, 0);

	cin.get();

	return 0;
}
