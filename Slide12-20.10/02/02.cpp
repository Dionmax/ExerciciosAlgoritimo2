// 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include <time.h>

using namespace std;

const int TAMANHO = 5;

template<typename T>
void escreva(T alguma_coisa)
{
	cout << alguma_coisa << endl;
}

template<typename T>
void escrever_matriz(T matriz[][TAMANHO])
{
	for (int linha = 0; linha < TAMANHO; linha++)
		for (int coluna = 0; coluna < TAMANHO; coluna++)
			escreva(matriz[linha][coluna]);
}

void espaco()
{
	escreva(" ");
}

struct Matrizes
{
	int valor,
		linha,
		coluna;
};


int gerar_numeros(bool impares)
{
	int numero = rand() % 99;

	if (numero % 2 == 0 && impares ||
		numero % 2 == !0 && !impares)
		numero += 1;

	return numero;
}

Matrizes gerar_valores_matriz()
{
	Matrizes valor;

	valor.linha = rand() % 4;
	valor.coluna = rand() % 4;

	valor.valor = gerar_numeros(false);

	return valor;
}

void gerar_matriz(int matriz[][TAMANHO])
{
	Matrizes valores;

	for (int linha = 0; linha < TAMANHO; linha++)
		for (int coluna = 0; coluna < TAMANHO; coluna++)
			matriz[linha][coluna] = gerar_numeros(true);

	valores = gerar_valores_matriz();

	matriz[valores.linha][valores.coluna] = valores.valor;
}

void achar_numero(int matriz[][TAMANHO])
{
	int posicao_linha, posicao_coluna, valor;

	for (int linha = 0; linha < TAMANHO; linha++)
		for (int coluna = 0; coluna < TAMANHO; coluna++)
			if (matriz[linha][coluna] %2 == 0)
			{
				posicao_linha = linha;
				posicao_coluna = coluna;
				valor = matriz[linha][coluna];
			}

	cout << "Linha:" << posicao_linha << endl;
	cout << "Coluna:" << posicao_coluna << endl;
	cout << "Valor:" << valor << endl;
}

int main()
{
	srand(time(0));

	int matriz[TAMANHO][TAMANHO];

	gerar_matriz(matriz);

	achar_numero(matriz);

	cin.get();
    return 0;
}

