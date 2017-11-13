#pragma once

#include <string>
#include <iostream>

using namespace std;

void escrever_mapa()
{
	cout << endl;

	for (int linha = 0; linha < TAMANHO_MATRIZ_PRINCIPAL; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_PRINCIPAL; coluna++)
			cout << "| " << mapa[linha][coluna] << " ";

		cout << "|" << endl;
	}
}

void mostrar_status_monstros(Pokemon mostros_jogo[])
{
	for (int indice = 0; indice < NUMEROS_MONSTROS; indice++)
	{
		cout << "Nome: " << mostros_jogo[indice].nome << endl;
		cout << "Tipo: " << mostros_jogo[indice].tipo << endl;
		cout << "Vida: " << mostros_jogo[indice].vida << endl;
		cout << "Ataque: " << mostros_jogo[indice].ataque << endl;
		cout << "Defesa: " << mostros_jogo[indice].defesa << endl;
		cout << "Velocidade: " << mostros_jogo[indice].velocidade << endl;

		for (int contador = 0; contador < NUMERO_GOLPES; contador++)
		{
			cout << mostros_jogo[indice].golpes[indice].nome[contador] << " ";
			cout << mostros_jogo[indice].golpes[indice].poder[contador] << " ";
			cout << "(" << mostros_jogo[indice].golpes[indice].utilizacoes[contador] << ")" << endl;
		}

		cout << endl;
	}

	cin.get();
}

void pokemons_sortiados(Personagem jogador, Personagem oponentes[])
{
	for (int indice = 0; indice < 2; indice++)
		cout << "Monstro " << indice + 1 << " do jogador: " << jogador.pokemon[indice].nome << endl;

	cout << endl;

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
	{
		for (int contador = 0; contador < 2; contador++)
			cout << "Oponente " << indice + 1 << " monstro " << contador + 1 << ": " << oponentes[indice].pokemon[contador].nome << endl;
		cout << endl;
	}

	cin.get();
}


void aviso_combate()
{
	cout << "Você entrou em combate!!" << endl;
}
