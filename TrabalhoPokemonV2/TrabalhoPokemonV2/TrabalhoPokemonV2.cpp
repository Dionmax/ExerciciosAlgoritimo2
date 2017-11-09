// TrabalhoPokemonV2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <time.h>

#include "Atributos.h"
#include "Mapa.h"
#include "SuporteEscrita.h"

using namespace std;

void teste()
{
	gerar_mapa();
	gerar_posicoes();
	escrever_mapa();
}

int main()
{
	srand(time(0));

	teste();

	cin.get();
    return 0;
}

