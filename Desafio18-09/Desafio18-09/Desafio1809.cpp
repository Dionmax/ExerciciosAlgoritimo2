// Desafio1809.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

#include "SuporteaoDesafio.h"
#include "SuporteaoDesafioEscrito.h"

using namespace std;

void rotacionador(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			int aux = matriz[linha][coluna];

			matriz[linha][coluna] = matriz[coluna][linha];

			matriz[coluna][linha] = aux;

			escrever_matriz(matriz);

			if (verificar_igualdade(matriz))
				escrever_matriz(matriz);
		}
	}

	escreva_nada();
}

void bagunçador(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	int contador_ponteiro = 0;

	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			int aux = matriz[linha][coluna];



			rotacionador(matriz);
		}
		contador_ponteiro++;
	}
}

int main()
{
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = { 1,2,3,4,5,6,7,8,9 };

	bagunçador(matriz);

	cin.get();

    return 0;
}

