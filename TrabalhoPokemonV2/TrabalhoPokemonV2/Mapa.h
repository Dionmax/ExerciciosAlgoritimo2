#pragma once

#include <string>
#include <iostream>

#include "Atributos.h"
//#include "Acoes.h"

using namespace std;

#define TAMANHO_MATRIZ_PRINCIPAL 17
#define JOGADOR 'P'
#define OPONENTE 'E'
#define LIDER_GINASIO 'L'
#define CENTRO_POKEMON 'C'
#define CERCA '#'

const int NUMERO_CERCAS = 10;
const int NUMERO_OPONENTES = 4;

char mapa[TAMANHO_MATRIZ_PRINCIPAL][TAMANHO_MATRIZ_PRINCIPAL];

void gerar_mapa()
{
	for (int linha = 0; linha < TAMANHO_MATRIZ_PRINCIPAL; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_PRINCIPAL; coluna++)
			mapa[linha][coluna] = ' ';
}

bool verificar_casa_livre(int linha, int coluna)
{
	bool livre = true;

	if (mapa[linha][coluna] == ' ')
		livre = false;

	return livre;
}

void mudar_valores_linha_coluna(int &linha, int &coluna)
{
	do
	{
		linha = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
		coluna = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
	} while (verificar_casa_livre(linha, coluna));
}

void gerar_objetos()
{
	int linha, coluna;

	for (int indice = 0; indice < NUMERO_CERCAS; indice++)
	{
		mudar_valores_linha_coluna(linha, coluna);
		mapa[linha][coluna] = CERCA;
	}

	mudar_valores_linha_coluna(linha, coluna);
	mapa[linha][coluna] = CENTRO_POKEMON;

	/*mudar_valores_linha_coluna(linha, coluna);
	mapa[linha][coluna] = LIDER_GINASIO;*/
}
