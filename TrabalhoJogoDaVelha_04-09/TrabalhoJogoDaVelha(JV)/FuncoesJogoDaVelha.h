#ifndef FUNCOESJOGODAVELHA_H
#define FUNCOESJOGODAVELHA_H

#include "stdafx.h"
#include "string"

#define TAMANHO_MATRIZ_JOGO 3
#define JOGADOR_X 'X'
#define JOGADOR_O 'O'

const int ZERO = 0,
		UM = 1,
		DOIS = 2;

using namespace std;

bool verificar_diogonal_secundaria(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

	if (matriz_jogo[ZERO][DOIS] == matriz_jogo[UM][UM] && matriz_jogo[ZERO][DOIS] != "")
		if (matriz_jogo[ZERO][DOIS] == matriz_jogo[DOIS][ZERO])
			fim_de_jogo = true;

	return fim_de_jogo;
}

bool verificar_digonal_primaria(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

		if (matriz_jogo[ZERO][ZERO] == matriz_jogo[UM][UM] && matriz_jogo[ZERO][ZERO] != "")
			if (matriz_jogo[ZERO][ZERO] == matriz_jogo[DOIS][DOIS])
				fim_de_jogo = true;

	return fim_de_jogo;
}

bool verificar_sentido_vertical(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

	for (int contador = 0; contador < TAMANHO_MATRIZ_JOGO; contador++)
		if (matriz_jogo[ZERO][contador] == matriz_jogo[UM][contador] && matriz_jogo[ZERO][contador] != "")
			if (matriz_jogo[ZERO][contador] == matriz_jogo[DOIS][contador])
				fim_de_jogo = true;

	return fim_de_jogo;
}

bool verificar_sentido_horizontal(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

	for(int contador = 0;contador < TAMANHO_MATRIZ_JOGO; contador ++)
		if (matriz_jogo[contador][ZERO] == matriz_jogo[contador][UM] && matriz_jogo[contador][ZERO] != "")
			if (matriz_jogo[contador][ZERO] == matriz_jogo[contador][DOIS])
				fim_de_jogo = true;

	return fim_de_jogo;
}

bool verificar_ganhador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	bool fim_de_jogo = false;

	fim_de_jogo = verificar_sentido_horizontal(matriz_jogo);

	if (!fim_de_jogo)
		fim_de_jogo = verificar_sentido_vertical(matriz_jogo);

	if (!fim_de_jogo)
		fim_de_jogo = verificar_digonal_primaria(matriz_jogo);

	if (!fim_de_jogo)
		fim_de_jogo = verificar_diogonal_secundaria(matriz_jogo);

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

