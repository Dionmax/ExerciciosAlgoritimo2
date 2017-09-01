// TrabalhoJogoDaVelhaJV.cpp: Define o ponto de entrada para a aplicação de console.
// #4 JV = Joe Vega -> Invoco o Capitão referência em modo de ataque! 

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>
#include <stdio.h>

#include "FuncoesJogoDaVelha.h"

using namespace std;

bool andamento_jogo(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	
}

void inicio_jogo()
{
	string matriz_jogo[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO];

	andamento_jogo(matriz_jogo);
}

int main()
{
	inicio_jogo();

	cin.get();

    return 0;
}

