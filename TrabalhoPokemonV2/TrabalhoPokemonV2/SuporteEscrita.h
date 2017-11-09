#pragma once

#include <string>
#include <iostream>

using namespace std;

void escrever_mapa()
{
	cout << endl;

	for (int linha = 0; linha < TAMANHO_MATRIZ_PRINCIPAL; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_PRINCIPAL; coluna++)
			cout << "| " << mapa[linha][coluna] << " ";

		cout << "|" << endl;
	}
}

