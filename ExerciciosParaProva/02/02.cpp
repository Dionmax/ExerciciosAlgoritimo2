// 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int NADA = 0;
const int TAMANHO = 5;

template <typename T>
void escreva(T alguma_coisa, bool espaco = false)
{
	cout << alguma_coisa;

	if (espaco)
		cout << " ";
}

template <typename T>
void escrever_matriz(T matriz[][TAMANHO])
{
	for (int linha = 0; linha < TAMANHO; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO; coluna++)
			cout << matriz[linha][coluna] << " ";
		cout << endl;
	}
	cout << endl;
}

template <typename T>
void trocar_valores(T &valor_um, T &valor_dois)
{
	T aux = valor_um;
	valor_um = valor_dois;
	valor_dois = aux;
}

template <typename T>
int transpostador_recursivo(T matriz[][TAMANHO], int linha = 0, int coluna = 0)
{
	escrever_matriz(matriz);

	if (coluna == TAMANHO)
	{
		linha += 1;
		coluna = linha;
	}

	if (linha == TAMANHO - 1 && coluna == TAMANHO - 1)
		return NADA;

	trocar_valores(matriz[linha][coluna], matriz[coluna][linha]);

	transpostador_recursivo(matriz, linha, coluna + 1);
}

int main()
{
	string matriz[TAMANHO][TAMANHO] =
	{ "A1","A2","A3","A4","A5",
	"B1","B2","B3","B4","B5",
	"C1","C2","C3","C4","C5",
	"D1","D2","D3","D4","D5",
	"E1","E2","E3","E4","E5" };

	escrever_matriz(matriz);

	transpostador_recursivo(matriz);

	//escrever_matriz(matriz);

	cin.get();
    return 0;
}

