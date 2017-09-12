// TrabalhoJogoDaVelhaJV.cpp: Define o ponto de entrada para a aplicação de console.
// #4 JV = Joe Vega -> Invoco o Capitão referência em modo de ataque! 

#include "stdafx.h"
#include "iostream"
#include "string"
#include <time.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>

#include "FuncoesJogoDaVelha.h"
#include "MiniMaxJDV.h"

using namespace std;

void fim_de_jogo(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], bool jogador,bool deu_velha )
{
	if (!deu_velha)
	{
		if (jogador)
			cout << "Jogador O venceu!" << endl << endl;
		else
			cout << "Jogador X venceu!" << endl;

		cout << "Fim de Jogo" << endl << endl;
	}
	else
		cout << "Fim de Jogo" << endl;

	escrever_matriz(matriz_jogo);

	cin.get();
	cin.get();

	exit(0);
}

int receber_verificar_casa_jogada(int casa_jogada)
{
	cin >> casa_jogada;

	while (!(casa_jogada > ZERO && casa_jogada < DEZ))
	{
		cout << "Jogada Invalida!" << endl;
		cin >> casa_jogada;
	}

	return casa_jogada;
}

void movimento_jogador_x_maquina(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int casa_jogada = ZERO;

	casa_jogada = receber_verificar_casa_jogada(casa_jogada);

	if (verificar_jogada(matriz_jogo, casa_jogada))
		alocar_jogada(matriz_jogo, JOGADOR_O, casa_jogada, false);
	else
	{
		cout << "Casa ocupada!" << endl;
		movimento_jogador_x_maquina(matriz_jogo);
	}

	if (verificar_ganhador(matriz_jogo))
		fim_de_jogo(matriz_jogo, true, false);
}

void movimentos_computador_minimax(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int ponteiro_para_matriz = 0,
		linha,
		coluna;

	Movimento melhormovimento = melhor_movimento(matriz_jogo);

	linha = melhormovimento.linha;
	coluna = melhormovimento.coluna;

	cout << linha << endl;
	cout << coluna << endl;

	ponteiro_para_matriz = linha * TAMANHO_MATRIZ_JOGO + coluna;

	if (verificar_jogada(matriz_jogo, ponteiro_para_matriz+1))
		alocar_jogada(matriz_jogo, JOGADOR_X, ponteiro_para_matriz+1, false);
	else
		movimentos_computador_minimax(matriz_jogo);

	if (verificar_ganhador(matriz_jogo))
		fim_de_jogo(matriz_jogo, false, false);
}

void movimentos_computador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	jogadas_computador(matriz_jogo);

	if (verificar_ganhador(matriz_jogo))
		fim_de_jogo(matriz_jogo, false, false);
}

bool alternancia_de_jogadores(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], int casa_jogada, bool jogador_vez)
{
	if (jogador_vez)
		jogador_vez = alocar_jogada(matriz_jogo, JOGADOR_X, casa_jogada, jogador_vez);
	else
		jogador_vez = alocar_jogada(matriz_jogo, JOGADOR_O, casa_jogada, jogador_vez);

	return jogador_vez;
}

void possivel_vencedor(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], bool jogador_vez)
{
	if (verificar_ganhador(matriz_jogo))
		fim_de_jogo(matriz_jogo, jogador_vez, false);
}

void inicio_jogo_minimax(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int jogadas_restantes = NOVE;

	bool jogo_em_andamento = true;

	while (jogadas_restantes > ZERO)
	{
		movimento_jogador_x_maquina(matriz_jogo);

		movimentos_computador_minimax(matriz_jogo);

		escrever_matriz(matriz_jogo);

		jogadas_restantes--;
	}

	if (jogadas_restantes == ZERO)
		fim_de_jogo(matriz_jogo, true, true);
}

void inicio_jogo_computador(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int jogadas_restantes = NOVE;

	bool jogo_em_andamento = true;

	while (jogadas_restantes > ZERO)
	{
		movimento_jogador_x_maquina(matriz_jogo);

		movimentos_computador(matriz_jogo);

		escrever_matriz(matriz_jogo);

		jogadas_restantes--;
	}

	if (jogadas_restantes == ZERO)
		fim_de_jogo(matriz_jogo, true, true);
}

void inicio_jogo_jogadores(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int casa_jogada = 0,
		jogadas_restantes = 9;

	bool jogador_vez = false;

	while (jogadas_restantes > ZERO)
	{
		casa_jogada = receber_verificar_casa_jogada(casa_jogada);

		if (verificar_jogada(matriz_jogo, casa_jogada))
		{
			jogador_vez = alternancia_de_jogadores(matriz_jogo, casa_jogada, jogador_vez);

			possivel_vencedor(matriz_jogo, jogador_vez);

			jogadas_restantes--;
		}
		else
			cout << endl <<"Casa ocupada!" << endl << endl;

		escrever_matriz(matriz_jogo);
	}

	if (jogadas_restantes == ZERO)
		fim_de_jogo(matriz_jogo, jogador_vez, true);
}

void comeco(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int escolha_menu = ZERO;

	cout << "Escolha seu modo de jogo:" << endl;
	cout << "1 - Para jogar contra um jogador" << endl;
	cout << "2 - Para jogar contra a maquina" << endl;

	cin >> escolha_menu;

	while (!(escolha_menu == UM || escolha_menu == DOIS))
	{
		cout << "Escolha invalida!" << endl;
		cin >> escolha_menu;
	}

	switch (escolha_menu)
	{
	case 1:
		escrever_ordem_casas();
		inicio_jogo_jogadores(matriz_jogo);

		break;

	case 2:
		escrever_ordem_casas();
		inicio_jogo_computador(matriz_jogo);

		break;

	default:
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	string matriz_jogo[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO];

	comeco(matriz_jogo);

	//inicio_jogo_minimax(matriz_jogo);

    return 0;
}

