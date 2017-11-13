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
	"Chamusco","Queimadinho", "Esguicho", "Lagoa Azul", "Ventinho", "Flutuadoris",
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
	string nome;

	char tipo;

	int vida,
		ataque,
		defesa,
		velocidade;

	Golpe golpes[NUMEROS_MONSTROS];
};

struct Personagem
{
	Pokemon pokemon[2];

	int linha[NUMERO_OPONENTES], coluna[NUMERO_OPONENTES];
};

int gerar_valores_aleatorios(int limite)
{
	return rand() % limite;
}

void atribuir_mostros(Pokemon pokemon[NUMEROS_MONSTROS])
{
	for (int indice = 0; indice < NUMEROS_MONSTROS; indice++)
	{
		pokemon[indice].nome = NOMES_POKEMON[indice];
		pokemon[indice].tipo = ORDEM_TIPO[indice];
		pokemon[indice].vida = rand() % 100 + 100;
		pokemon[indice].ataque = rand() % 30 + 70;
		pokemon[indice].defesa = rand() % 30 + 70;
		pokemon[indice].velocidade = rand() % 100;

		for (int contador = 0; contador < NUMERO_GOLPES; contador++)
		{
			pokemon[indice].golpes[indice].nome[contador] = NOMES_PODER[contador];
			pokemon[indice].golpes[indice].poder[contador] = rand() % 20 + 30;
			pokemon[indice].golpes[indice].utilizacoes[contador] = rand() % 5 + 5;
		}
	}
}

bool verificar_repeticao(int array[], int tamanho, int valor)
{
	bool repetido = false;

	for (int indice = 0; indice < tamanho; indice++)
		if (array[indice] != -1)
			if (array[indice] == valor)
				repetido = true;

	return repetido;
}

int numero_para_monstro(int& numero, int ja_foi[NUMEROS_MONSTROS])
{
	do
		numero = gerar_valores_aleatorios(NUMEROS_MONSTROS - 1);
	while (verificar_repeticao(ja_foi, NUMEROS_MONSTROS, numero));

	ja_foi[numero] = numero;

	return numero;
}

void sortiar_monstros(Personagem& jogador, Personagem oponentes[], Pokemon monstros[])
{
	int numero,
		ja_foi[NUMEROS_MONSTROS] = { -1 };

	for (int indice = 0; indice < 2; indice++)
		jogador.pokemon[indice] = monstros[numero_para_monstro(numero, ja_foi)];

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		for (int contador = 0; contador < 2; contador++)
			oponentes[indice].pokemon[contador] = monstros[numero_para_monstro(numero, ja_foi)];
}
