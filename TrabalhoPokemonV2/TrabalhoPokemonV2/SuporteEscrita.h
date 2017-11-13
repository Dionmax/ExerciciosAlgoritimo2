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
			cout << mostros_jogo[indice].golpes[contador].nome << " ";
			cout << mostros_jogo[indice].golpes[contador].poder << " ";
			cout << "(" << mostros_jogo[indice].golpes[contador].utilizacoes << ")" << endl;
		}

		cout << endl;
	}

	cin.get();
}

void pokemons_sortiados(Personagem jogador, Personagem oponentes[])
{
	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
		cout << "Monstro " << indice + 1 << " do jogador: " << jogador.pokemon[indice].nome << endl;

	cout << endl;

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
	{
		for (int contador = 0; contador < NUMERO_MONSTROS_JOGADOR; contador++)
			cout << "Oponente " << indice + 1 << " monstro " << contador + 1 << ": " << oponentes[indice].pokemon[contador].nome << endl;
		cout << endl;
	}

	cin.get();
}

void escrever_quantidade_monstros_vivos(string personagem, int numero_monstro)
{
	cout << personagem << " tem " << numero_monstro << " monstros vivos" << endl;
}

void aviso_combate()
{
	cout << "Você entrou em combate!!" << endl << endl;
}

void listar_status_pokemon_jogador(Personagem jogador, string personagem)
{
	cout << "Dados do " << personagem << endl;

	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
	{
		cout << "Pokemon " << indice + 1 << " " << jogador.pokemon[indice].nome << endl;
		cout << "Vida " << jogador.pokemon[indice].vida << endl;
		cout << "Ataque " << jogador.pokemon[indice].ataque << endl;
		cout << "Defesa " << jogador.pokemon[indice].defesa << endl;

		for (int contador = 0; contador < NUMERO_GOLPES; contador++)
		{
			cout << jogador.pokemon[indice].golpes[contador].nome << " ";
			cout << jogador.pokemon[indice].golpes[contador].poder << " ";
			cout << "(" << jogador.pokemon[indice].golpes[contador].utilizacoes << ")" << endl;
		}
		cout << endl;
	}
}

int escolha(int limite)
{
	int numero = 0;

	do
		cin >> numero;
	while (numero > limite);

	return numero;
}

int menu_escolha_monstro(Personagem jogador)
{
	cout << "Monstros disponiveis: " << endl;

	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
		if (jogador.pokemon[indice].vida > 0)
		{
			cout << "Pokemon " << indice << " " << jogador.pokemon[indice].nome << endl;
			cout << "Vida " << jogador.pokemon[indice].vida << endl << endl;
		}

	return escolha(NUMERO_MONSTROS_JOGADOR);
}

int menu_escolha_ataque(Personagem jogador, int numero_monstro)
{
	for (int indice = 0; indice < NUMERO_GOLPES; indice++)
		if (jogador.pokemon[numero_monstro].golpes[indice].utilizacoes > 0)
		{
			cout << "Golpe " << indice << ": ";
			cout << jogador.pokemon[numero_monstro].golpes[indice].nome << " ";
			cout << jogador.pokemon[numero_monstro].golpes[indice].poder << " ";
			cout << "(" << jogador.pokemon[numero_monstro].golpes[indice].utilizacoes << ")" << endl;
		}

	return escolha(NUMERO_GOLPES);
}

void dano_causado(string quem, int dano)
{
	cout << quem << " Causou " << dano << " de dano." << endl;
}

void perdeu_monstro()
{
	cout << "------------------------Você perdeu seu monstro!!--------------------------" << endl;
}

void venceu_batalha()
{
	cout << "--------------------------Você venceu essa batalha!!-------------------------" << endl;
}

void mostrar_vida_restante(Personagem jogador, int numero_monstro)
{
	cout << "Vida restante "<< jogador.pokemon[numero_monstro].vida << endl << endl;
}

int FIM()
{
	return 0;
}

void fim_de_jogo()
{
	system("cls");
	cout << "Game Over";
	FIM();
}

void vida_reustaurada()
{
	cout << "Vida Reustaurada!" << endl << endl;
}
