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
	int linha = 7,
		coluna = 7;

	char t;

	t = cin.get();

	cout << t;

	while (true)
	{
		cout << t;

		t = cin.get();

		cout << t;
	}
}

void teste()
{
	gerar_mapa();

	int linha = 7,
		coluna = 7;

	int linha1 = 1,
		coluna1 = 1;

	Personagem oponente[NUMERO_OPONENTES];

	mapa[linha][coluna] = JOGADOR;

	gerar_oponentes(oponente);

	gerar_objetos();

	while (true)
	{
		escrever_mapa();

		movimentar_jogador(linha, coluna);

		movimentar_oponentes(oponente,linha, coluna);

		system("cls");
	}

}

int main()
{
	srand(time(0));

	teste();

	cin.get();
	cin.get();
	return 0;
}

