#pragma once

#include <string>
#include <iostream>

using namespace std;

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define ACAO 'j'

bool verificar_adjacencia(int linha, int coluna)
{
	bool adjacencia = false;

	for (int indice = -1; indice <= 1; indice++)
		for (int contador = -1; contador <= 1; contador++)
			if (mapa[linha + indice][coluna + contador] != ' ')
				adjacencia = true;

	return adjacencia;
}

bool verificar_casa_valida(int linha, int coluna)
{
	bool passou = false;

	if (linha >= 0 && linha < TAMANHO_MATRIZ_PRINCIPAL &&
		coluna >= 0 && coluna < TAMANHO_MATRIZ_PRINCIPAL &&
		!vericar_casa_livre(linha,coluna))
		passou = true;

	return passou;
}

void movimentar_jogador(char& tecla,int &linha,int &coluna)
{
	tecla = cin.get();

	switch (tecla)
	{
	case CIMA:
		mapa[linha][coluna] = ' ';
		if (verificar_casa_valida(linha - 1, coluna))
			linha--;
		break;
	case BAIXO:
		mapa[linha][coluna] = ' ';
		if (verificar_casa_valida(linha + 1, coluna))
		linha++;
		break;
	case ESQUERDA:
		mapa[linha][coluna] = ' ';
		if (verificar_casa_valida(linha, coluna - 1))
		coluna--;
		break;
	case DIREITA:
		mapa[linha][coluna] = ' ';
		if (verificar_casa_valida(linha, coluna + 1))
		coluna++;
		break;
	case ACAO:
		verificar_adjacencia(linha, coluna);
		break;
	default:
		break;
	}

	mapa[linha][coluna] = JOGADOR;
}
