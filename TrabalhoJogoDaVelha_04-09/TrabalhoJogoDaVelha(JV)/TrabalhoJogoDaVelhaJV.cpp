// TrabalhoJogoDaVelhaJV.cpp: Define o ponto de entrada para a aplicação de console.
// #4 JV = Joe Vega -> Invoco o Capitão referência em modo de ataque! 

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>
#include <stdio.h>

#include "FuncoesJogoDaVelha.h"

using namespace std;

bool andamento_jogo(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], int casa_jogada, bool jogador_vez)
{
	alocar_jogada(matriz_jogo, JOGADOR_O, casa_jogada, jogador_vez);
}

void inicio_jogo()
{
	int escolha_menu = 0,
		casa_jogada = 0;

	string matriz_jogo[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO];

	bool jogador_vez = false;

	cout << "Escolha seu modo de jogo:" << endl;
	cout << "1 - Para jogar contra um jogador" << endl;
	cout << "2 - Para jogar contra a maquina" << endl;

	scanf("%d", escolha_menu);

	andamento_jogo(matriz_jogo,casa_jogada,jogador_vez);
	escrever_matriz(matriz_jogo);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	inicio_jogo();

	cin.get();

    return 0;
}

