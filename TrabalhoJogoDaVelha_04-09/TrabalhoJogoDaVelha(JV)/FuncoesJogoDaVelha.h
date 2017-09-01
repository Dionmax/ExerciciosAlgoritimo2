#ifndef FUNCOESJOGODAVELHA_H
#define FUNCOESJOGODAVELHA_H

#include "stdafx.h"
#include "string"

#define TAMANHO_MATRIZ_JOGO 3
#define JOGADOR_X 'X'
#define JOGADOR_O 'O'

using namespace std;

bool verificar_ganhador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO -1; coluna++)
		{
			if (matriz_jogo[linha][coluna] == matriz_jogo[linha][coluna + 1] && matriz_jogo[linha][coluna] != "")
				if (matriz_jogo[linha][coluna] == matriz_jogo[linha][coluna + 2] && matriz_jogo[linha][coluna] != "")
				fim_de_jogo = true;
		}

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO -1; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			if (matriz_jogo[linha][coluna] == matriz_jogo[linha + 1][coluna] && matriz_jogo[linha][coluna] != "")
				if (matriz_jogo[linha][coluna] == matriz_jogo[linha + 2][coluna] && matriz_jogo[linha][coluna] != "")
					fim_de_jogo = true;
		}

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO - 1; linha++)
		for (int coluna = TAMANHO_MATRIZ_JOGO - 1; coluna > 0; coluna--)
		{
			if (matriz_jogo[linha][coluna] == matriz_jogo[linha + 1][coluna -1] && matriz_jogo[linha][coluna] != "")
				if (matriz_jogo[linha][coluna] == matriz_jogo[linha + 2][coluna - 2] && matriz_jogo[linha][coluna] != "")
					fim_de_jogo = true;
		}

	return fim_de_jogo;
}

bool verificar_jogada(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], int casa_jogada)
{
	int ponteiro_matriz;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			ponteiro_matriz = linha * TAMANHO_MATRIZ_JOGO + coluna;

			if (ponteiro_matriz == casa_jogada - 1)
				if (matriz_jogo[linha][coluna] != "")
					return false;
		}

	return true;
}

bool alocar_jogada(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], char jogador,int casa_jogada, bool vez_jogador)
{
	int ponteiro_matriz;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			ponteiro_matriz = linha * TAMANHO_MATRIZ_JOGO + coluna;
			if (ponteiro_matriz == casa_jogada - 1)
				matriz_jogo[linha][coluna] = jogador;
		}

	if (vez_jogador)
		return vez_jogador = false;
	else
		return vez_jogador = true;
}

void escrever_ordem_casas()
{
	int matriz_location[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO],
		ponteiro_matriz = 0;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			ponteiro_matriz = linha * TAMANHO_MATRIZ_JOGO + coluna;
			matriz_location[linha][coluna] = ponteiro_matriz + 1;
		}

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
	{
		cout << "|";

		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
			cout << matriz_location[linha][coluna] << "	|";

		cout << endl;
	}
}

void escrever_matriz(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
	{
		cout << "|";

		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
			cout << matriz_jogo[linha][coluna] << "	|";

		cout << endl;
	}
}


#endif // !FUNCOESJOGODAVELHA_H
