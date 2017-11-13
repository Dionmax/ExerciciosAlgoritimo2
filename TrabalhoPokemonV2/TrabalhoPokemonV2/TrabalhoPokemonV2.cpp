// TrabalhoPokemonV2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <time.h>

#include "Atributos.h"
#include "Mapa.h"
#include "SuporteEscrita.h"
#include "Acoes.h"

using namespace std;

void teste2()
{

}

void andamento_jogo()
{
	int linha = 7,
		coluna = 7;

	Personagem oponente[NUMERO_OPONENTES];

	Pokemon mostros_jogo;

	gerar_mapa();

	atribuir_mostros(mostros_jogo);

	mostrar_status_monstros(mostros_jogo);

	system("cls");

	mapa[linha][coluna] = JOGADOR;

	gerar_oponentes(oponente);

	gerar_objetos();

	while (true)
	{
		escrever_mapa();

		movimentar_jogador(linha, coluna);

		movimentar_oponentes(oponente, linha, coluna);

		system("cls");
	}

}

int main()
{
	srand(time(0));

	andamento_jogo();

	//teste2();

	cin.get();
	cin.get();
	return 0;
}

