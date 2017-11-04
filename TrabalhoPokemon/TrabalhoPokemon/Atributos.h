#ifndef ATRIBUTOS_H
#define ATRIBUTOS_H

#define FOGO 'F'
#define AGUA 'A'
#define VOADOR 'V'
#define GRAMA 'G'
#define ELETRICO 'E'

#include <string>
#include <iostream>

using namespace std;

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
};

void teste()
{
	Personagem jogador;

	jogador.pokemon[0].nome = "AAz";


	cout << jogador.pokemon[0].nome;
}

#endif // !ATRIBUTOS_H

