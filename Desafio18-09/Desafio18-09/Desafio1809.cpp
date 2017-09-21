// Desafio1809.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

#include "SuporteaoDesafio.h"

using namespace std;

int main()
{
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];

	bool teste = false;

	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
			matriz[linha][coluna] = 1;

	teste = verificar_igualdade(matriz);

	cout << teste;

	cin.get();

    return 0;
}

