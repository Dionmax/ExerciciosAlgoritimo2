#pragma once

#include <string>
#include <iostream>

using namespace std;

#define FOGO 'F'
#define AGUA 'A'
#define VOADOR 'V'
#define GRAMA 'G'
#define ELETRICO 'E'

struct Golpe
{
	string nome;

	char tipo;

	int poder,
		utilizacoes;
};

struct Pokemon
{
	string nome = "";

	char tipo;

	int vida,
		ataque,
		defesa,
		velocidade;
};

struct Personagem
{
	Pokemon pokemon[2];

	int linha, coluna;
};

