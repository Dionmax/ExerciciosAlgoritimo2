#pragma once

#include <string>
#include <iostream>

using namespace std;

#define TAMANHO_MATRIZ_PRINCIPAL 17
#define JOGADOR 'P'
#define OPONENTE 'E'
#define LIDER_GINASIO 'L'
#define CENTRO_POKEMON 'C'
#define CERCA '#'

char mapa[TAMANHO_MATRIZ_PRINCIPAL][TAMANHO_MATRIZ_PRINCIPAL];

void gerar_mapa()
{
	for (int linha = 0; linha < TAMANHO_MATRIZ_PRINCIPAL; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_PRINCIPAL; coluna++)
			 mapa[linha][coluna] = ' ';
}

bool vericar_casa_livre(int linha, int coluna)
{
	bool livre = true;

	if (mapa[linha][coluna] == ' ')
		livre = false;

	return livre;
}

struct Posicoes
{
	int linha,
		coluna;

	Posicoes(char alguem)
	{
		do
		{
			linha = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
			coluna = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
		} while (vericar_casa_livre(linha,coluna));

		mapa[linha][coluna] = alguem;
	}
};

void gerar_posicoes()
{
	mapa[7][7] = JOGADOR;

	for (int cercas = 0; cercas < 10; cercas++)
		Posicoes::Posicoes(CERCA);

	for (int oponete = 0; oponete < 4; oponete++)
		Posicoes::Posicoes(OPONENTE);

	Posicoes::Posicoes(LIDER_GINASIO);
	Posicoes::Posicoes(CENTRO_POKEMON);
}
