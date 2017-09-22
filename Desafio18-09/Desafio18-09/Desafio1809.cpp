// Desafio1809.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

#include "SuporteaoDesafio.h"

using namespace std;

void escrever_matriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			cout << matriz[linha][coluna];
		}
		cout << endl;
	}
}

void rotacionador(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			int aux = matriz[linha][coluna];

			matriz[linha][coluna] = matriz[coluna][linha];

			matriz[coluna][linha] = aux;

			if (verificar_igualdade(matriz))
				escrever_matriz(matriz);
		}
	}

	cout << "NADA" << endl;
}

void bagunšador(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ-1; coluna++)
		{
			int aux = matriz[linha][coluna];

			matriz[linha][coluna] = matriz[linha][coluna+1];

			matriz[linha][coluna + 1] = aux;

			rotacionador(matriz);
		}
	}
}

int main()
{
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = { 1,2,3,4,5,6,7,8,9 };

	bagunšador(matriz);

	cin.get();

    return 0;
}

