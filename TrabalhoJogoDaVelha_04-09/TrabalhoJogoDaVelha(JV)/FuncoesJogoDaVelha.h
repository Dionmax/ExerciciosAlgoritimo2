#ifndef FUNCOESJOGODAVELHA_H
#define FUNCOESJOGODAVELHA_H

#include "stdafx.h"
#include "string"

#define TAMANHO_MATRIZ_JOGO 3
#define JOGADOR_X 'X'
#define JOGADOR_O 'O'

using namespace std;

bool verificar_jogada(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], int casa_jogada)
{
	int ponteiro_matriz;

	for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
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

	for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
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

	for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		{
			ponteiro_matriz = coluna * TAMANHO_MATRIZ_JOGO + linha;
			matriz_location[coluna][linha] = ponteiro_matriz + 1;
		}

	for (int cont = 0; cont < TAMANHO_MATRIZ_JOGO; cont++)
	{
		cout << "|";

		for (int cont2 = 0; cont2 < TAMANHO_MATRIZ_JOGO; cont2++)
			cout << matriz_location[cont][cont2] << "	|";

		cout << endl;
	}
}

void escrever_matriz(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	for (int cont = 0; cont < TAMANHO_MATRIZ_JOGO; cont++)
	{
		cout << "|";

		for (int cont2 = 0; cont2 < TAMANHO_MATRIZ_JOGO; cont2++)
			cout << matriz_jogo[cont][cont2] << "	|";

		cout << endl;
	}
}


#endif // !FUNCOESJOGODAVELHA_H

