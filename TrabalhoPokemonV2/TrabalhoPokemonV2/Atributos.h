#pragma once

#include <string>
#include <iostream>

#include "Mapa.h"

using namespace std;

#define FOGO 'F'
#define AGUA 'A'
#define VOADOR 'V'
#define GRAMA 'G'
#define ELETRICO 'E'

const int NUMEROS_MONSTROS = 12;
const int NUMERO_GOLPES = 4;

const string NOMES_POKEMON[NUMEROS_MONSTROS] = {
	"Chamusco","Queimadinho", "Esguicho", "LagoaAzul", "Ventinho", "Flutuadoris",
	"Arbustora", "Arvoremagus", "Chokitu", "Choquinho", "Charmander", "Vulpix" };

const char ORDEM_TIPO[NUMEROS_MONSTROS] = { FOGO,FOGO,AGUA,AGUA,VOADOR,VOADOR,GRAMA,GRAMA,ELETRICO,ELETRICO,FOGO,FOGO };

const string NOMES_PODER[NUMERO_GOLPES] = { "Golpe primario","Investida","Ataque elemental","Golpe forte" };

struct Golpe
{
	string nome[NUMERO_GOLPES];

	int poder[NUMERO_GOLPES],
		utilizacoes[NUMERO_GOLPES];
};

struct Pokemon
{
	string nome[NUMEROS_MONSTROS];

	char tipo[NUMEROS_MONSTROS];

	int vida[NUMEROS_MONSTROS],
		ataque[NUMEROS_MONSTROS],
		defesa[NUMEROS_MONSTROS],
		velocidade[NUMEROS_MONSTROS];

	Golpe golpes[NUMEROS_MONSTROS];
};

struct Personagem
{
	Pokemon pokemon[2];

	int linha[NUMERO_OPONENTES], coluna[NUMERO_OPONENTES];
};

void atribuir_mostros(Pokemon& pokemon)
{
	for (int indice = 0; indice < NUMEROS_MONSTROS; indice++)
	{
		pokemon.nome[indice] = NOMES_POKEMON[indice];
		pokemon.tipo[indice] = ORDEM_TIPO[indice];
		pokemon.vida[indice] = rand() % 100 + 100;
		pokemon.ataque[indice] = rand() % 30 + 70;
		pokemon.defesa[indice] = rand() % 30 + 70;
		pokemon.velocidade[indice] = rand() % 100;

		for (int contador = 0; contador < NUMERO_GOLPES; contador++)
		{
			pokemon.golpes[indice].nome[contador] = NOMES_PODER[contador];
			pokemon.golpes[indice].poder[contador] = rand() % 20 + 30;
			pokemon.golpes[indice].utilizacoes[contador] = rand() % 5 + 5;
		}
	}
}
