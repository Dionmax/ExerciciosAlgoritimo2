#pragma once

#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <istream>

using namespace std;

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define ACAO 'j'
#define VAZIO ' '

const int NADA = 0;

char verificar_adjacencia(int linha, int coluna)
{
	char adjacencia = VAZIO;

	if (mapa[linha + 1][coluna] != VAZIO &&
		mapa[linha + 1][coluna] != CERCA)
		adjacencia = mapa[linha + 1][coluna];

	if (mapa[linha - 1][coluna] != VAZIO &&
		mapa[linha - 1][coluna] != CERCA)
		adjacencia = mapa[linha - 1][coluna];

	if (mapa[linha][coluna + 1] != VAZIO&&
		mapa[linha][coluna + 1] != CERCA)
		adjacencia = mapa[linha][coluna + 1];

	if (mapa[linha][coluna - 1] != VAZIO &&
		mapa[linha][coluna - 1] != CERCA)
		adjacencia = mapa[linha][coluna - 1];

	return adjacencia;
}

bool verificar_casa_valida(int linha, int coluna)
{
	bool passou = false;

	if (linha >= 0 && linha < TAMANHO_MATRIZ_PRINCIPAL &&
		coluna >= 0 && coluna < TAMANHO_MATRIZ_PRINCIPAL &&
		!verificar_casa_livre(linha, coluna))
		passou = true;

	return passou;
}

void movimentar_jogador(int &linha, int &coluna)
{
	char tecla;

	cin >> tecla;

	switch (tecla)
	{
	case CIMA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha - 1, coluna))
			linha--;
		break;
	case BAIXO:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha + 1, coluna))
			linha++;
		break;
	case ESQUERDA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha, coluna - 1))
			coluna--;
		break;
	case DIREITA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha, coluna + 1))
			coluna++;
		break;
	case ACAO:
		if (verificar_adjacencia(linha, coluna) != ' ')
			cout << verificar_adjacencia(linha, coluna);
		break;
	default:
		cout << "enter";
		break;
	}

	mapa[linha][coluna] = JOGADOR;
}

int perseguir_jogador(int linhaJogador, int colunaJogador, int &linhaOponetne, int &colunaOponete, bool ja_foi)
{
	if (!ja_foi)
		return NADA;

	if (linhaJogador > linhaOponetne && verificar_casa_valida(linhaOponetne + 1, colunaOponete))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne += 1, colunaOponete, false);
	else if (linhaJogador < linhaOponetne && verificar_casa_valida(linhaOponetne - 1, colunaOponete))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne -= 1, colunaOponete, false);

	if (colunaJogador > colunaOponete && verificar_casa_valida(linhaOponetne, colunaOponete + 1))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete += 1, false);
	else if (colunaJogador < colunaOponete && verificar_casa_valida(linhaOponetne, colunaOponete - 1))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete -= 1, false);
}

void gerar_oponentes(Personagem oponente[NUMERO_OPONENTES])
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
	{
		oponente[indice].linha[indice] = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
		oponente[indice].coluna[indice] = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
	}

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		mapa[oponente[indice].linha[indice]][oponente[indice].coluna[indice]] = OPONENTE;
}

void mover_oponentes(int linhaJogador, int colunaJogador, int &linhaOponetne, int &colunaOponete)
{
	mapa[linhaOponetne][colunaOponete] = VAZIO;
	perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete, true);
	mapa[linhaOponetne][colunaOponete] = OPONENTE;
}

void movimentar_oponentes(Personagem oponente[NUMERO_OPONENTES], int linhaJogador, int colunaJogador)
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		mover_oponentes(linhaJogador, colunaJogador, oponente[indice].linha[indice], oponente[indice].coluna[indice]);
}

void executar_acao(Personagem oponente[NUMERO_OPONENTES])
{

}
