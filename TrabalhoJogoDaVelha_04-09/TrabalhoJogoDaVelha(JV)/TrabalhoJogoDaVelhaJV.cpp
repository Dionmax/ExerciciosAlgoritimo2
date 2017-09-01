// TrabalhoJogoDaVelhaJV.cpp: Define o ponto de entrada para a aplicação de console.
// #4 JV = Joe Vega -> Invoco o Capitão referência em modo de ataque! 

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>
#include <stdio.h>

#include "FuncoesJogoDaVelha.h"

using namespace std;

bool andamento_jogo(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], char jogador, int casa_jogada, bool jogador_vez)
{
	return jogador_vez = alocar_jogada(matriz_jogo, jogador, casa_jogada, jogador_vez);
}

void inicio_jogo_jogador()
{
	int casa_jogada = 0;

	string matriz_jogo[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO];

	bool jogador_vez = false;

	while (true)
	{
		cin >> casa_jogada;

		if (verificar_jogada(matriz_jogo, casa_jogada))
		{
			if (jogador_vez)
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_X, casa_jogada, jogador_vez);
			else
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_O, casa_jogada, jogador_vez);
		}
		else
			cout << endl <<"Casa ocupada!" << endl << endl;

		escrever_matriz(matriz_jogo);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha_menu = 0;

	//cout << "Escolha seu modo de jogo:" << endl;
	//cout << "1 - Para jogar contra um jogador" << endl;
	//cout << "2 - Para jogar contra a maquina" << endl;

	//cin >> escolha_menu;

	escrever_ordem_casas();

	inicio_jogo_jogador();

	cin.get();

    return 0;
}

