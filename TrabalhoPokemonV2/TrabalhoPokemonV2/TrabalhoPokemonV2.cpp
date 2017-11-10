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

void teste()
{
	gerar_mapa();

	int linha = 7,
		coluna = 7;

	char tecla;

	mapa[linha][coluna] = JOGADOR;

	movimento_oponente();
	
	while (true)
	{
		escrever_mapa();

		movimentar_jogador(tecla,linha,coluna);

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

