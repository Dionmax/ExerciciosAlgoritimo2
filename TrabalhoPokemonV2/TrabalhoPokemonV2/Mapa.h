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

const int NUMERO_OPONENTES = 4;

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
	int linha = 0,
		coluna = 0;

	Posicoes(char alguem,int& posicaoX,int& posicaoY)
	{
		do
		{
			linha = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
			coluna = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
		} while (vericar_casa_livre(linha,coluna));

		mapa[linha][coluna] = alguem;
	}
};

void gerar_posicoes(Personagem oponente[NUMERO_OPONENTES])
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		Posicoes::Posicoes(OPONENTE, oponente[indice].linha, oponente[indice].coluna);

}

void movimento_oponente()
{
	Personagem oponente[NUMERO_OPONENTES];

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		mapa[oponente[indice].linha][oponente[indice].coluna] = OPONENTE;
}
