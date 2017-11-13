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

const string NOMES_POKEMON[NUMEROS_MONSTROS] = { 
	"Chamusco","Queimadinho", "Esguicho", "LagoaAzul", "Ventinho", "Flutuadoris",
	"Arbustora", "Arvoremagus", "Chokitu", "Choquinho", "Charmander", "Vulpix"};

const char ORDEM_TIPO[NUMEROS_MONSTROS]={FOGO,FOGO,AGUA,AGUA,VOADOR,VOADOR,GRAMA,GRAMA,ELETRICO,ELETRICO,FOGO,FOGO};

struct Golpe
{
	string nome;

	char tipo;

	int poder,
		utilizacoes;
};

struct Pokemon
{
	string nome[NUMEROS_MONSTROS];

	char tipo[NUMEROS_MONSTROS];

	int vida[NUMEROS_MONSTROS],
		ataque[NUMEROS_MONSTROS],
		defesa[NUMEROS_MONSTROS],
		velocidade[NUMEROS_MONSTROS];
};

struct Personagem
{
	Pokemon pokemon[2];

	int linha[NUMERO_OPONENTES], coluna[NUMERO_OPONENTES];
};

void atribuir_mostros(Pokemon pokemon)
{
	for (int indice = 0; indice < NUMEROS_MONSTROS; indice++)
	{

	}
}

