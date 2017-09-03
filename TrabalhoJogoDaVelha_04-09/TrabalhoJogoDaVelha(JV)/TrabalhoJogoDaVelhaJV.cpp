// TrabalhoJogoDaVelhaJV.cpp: Define o ponto de entrada para a aplicação de console.
// #4 JV = Joe Vega -> Invoco o Capitão referência em modo de ataque! 

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>
#include <stdio.h>

#include "FuncoesJogoDaVelha.h"

using namespace std;

void fim_de_jogo(bool jogador,bool deu_velha )
{
	if (!deu_velha)
	{
		if (jogador)
			cout << "Jogador O venceu!" << endl;
		else
			cout << "Jogador X venceu!" << endl;

		cout << "Fim de Jogo" << endl;
	}
	else
		cout << "Fim de Jogo" << endl;

	cin.get();
}

bool andamento_jogo(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], char jogador, int casa_jogada, bool jogador_vez)
{
	return jogador_vez = alocar_jogada(matriz_jogo, jogador, casa_jogada, jogador_vez);
}

void inicio_jogo_computador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int casa_jogada = 0,
		jogadas_restantes = 9;

	bool jogador_vez = false,
		jogo_em_andamento = true;

	while (jogo_em_andamento && jogadas_restantes > 0)
	{
		cin >> casa_jogada;

		while (!(casa_jogada > 0 && casa_jogada < 10))
		{
			cout << "Jogada Invalida!" << endl;
			cin >> casa_jogada;
		}

		if (verificar_jogada(matriz_jogo, casa_jogada))
		{
			if (jogador_vez)
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_X, casa_jogada, jogador_vez);
			else
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_O, casa_jogada, jogador_vez);

			if (verificar_ganhador(matriz_jogo))
			{
				jogo_em_andamento = false;
				fim_de_jogo(jogador_vez, false);
			}

			jogadas_restantes--;
		}
		else
			cout << endl << "Casa ocupada!" << endl << endl;

		escrever_matriz(matriz_jogo);
	}

	if (jogadas_restantes == 0)
		fim_de_jogo(jogador_vez, true);
}

void inicio_jogo_jogador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int casa_jogada = 0,
		jogadas_restantes = 9;

	bool jogador_vez = false,
		jogo_em_andamento = true;

	while (jogo_em_andamento && jogadas_restantes > 0)
	{
		cin >> casa_jogada;

		while (!(casa_jogada > 0 && casa_jogada < 10))
		{
			cout << "Jogada Invalida!" << endl;
			cin >> casa_jogada;
		}

		if (verificar_jogada(matriz_jogo, casa_jogada))
		{
			if (jogador_vez)
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_X, casa_jogada, jogador_vez);
			else
				jogador_vez = andamento_jogo(matriz_jogo, JOGADOR_O, casa_jogada, jogador_vez);

			if (verificar_ganhador(matriz_jogo))
			{
				jogo_em_andamento = false;
				fim_de_jogo(jogador_vez,false);
			}

			jogadas_restantes--;
		}
		else
			cout << endl <<"Casa ocupada!" << endl << endl;

		escrever_matriz(matriz_jogo);
	}

	if (jogadas_restantes == 0)
		fim_de_jogo(jogador_vez, true);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha_menu = 0;

	string matriz_jogo[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO];

	cout << "Escolha seu modo de jogo:" << endl;
	cout << "1 - Para jogar contra um jogador" << endl;
	cout << "2 - Para jogar contra a maquina" << endl;

	cin >> escolha_menu;

	switch (escolha_menu)
	{
	case 1:
		inicio_jogo_jogador(matriz_jogo);
		escrever_ordem_casas();

		break;

	case 2:
		inicio_jogo_computador(matriz_jogo);
		escrever_ordem_casas();

		break;

	default:
		break;
	}

	cin.get();

    return 0;
}

