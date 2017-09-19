// Desafio1809.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define TAMANHO 3

bool verificar_igualdade(int matriz[][TAMANHO])
{
	int horizontal = 0,
		vertical = 0,
		d_primaria = 0,
		d_secundaria = 0;

	for (int linha = 0; linha < TAMANHO; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO; coluna++)
		{
			if (linha == 0)
				horizontal += matriz[linha][coluna];

			int aux = 0;

			aux += matriz[linha][coluna];
		}
	}
}

int main()
{
	int matriz[TAMANHO][TAMANHO] = { 1,2,3,
									 4,5,6,
									 7,8,9 };

    return 0;
}

