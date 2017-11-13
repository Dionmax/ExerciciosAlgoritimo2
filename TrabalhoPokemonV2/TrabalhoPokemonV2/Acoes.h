#pragma once

#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <istream>

#include "Atributos.h"

using namespace std;

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define ACAO 'j'
#define VAZIO ' '

const int NADA = 0;

void reustaurar_vida(Personagem& jogador)
{
	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
	{
		jogador.pokemon[indice].tipo = jogador.pokemon[indice].vida_inicial;
		mostrar_vida_restante(jogador,indice);
		vida_reustaurada();
	}

}

void executar_acao_jogador(char opcao, Personagem& jogador)
{
	switch (opcao)
	{
	case CENTRO_POKEMON:
		reustaurar_vida(jogador);
		break;
	case LIDER_GINASIO:
		NADA;
	default:
		break;
	}
}

char verificar_adjacencia(int linha, int coluna)
{
	char adjacencia = VAZIO;

	if (mapa[linha + 1][coluna] != VAZIO &&
		mapa[linha + 1][coluna] != CERCA)
		adjacencia = mapa[linha + 1][coluna];

	if (mapa[linha - 1][coluna] != VAZIO &&
		mapa[linha - 1][coluna] != CERCA)
		adjacencia = mapa[linha - 1][coluna];

	if (mapa[linha][coluna + 1] != VAZIO&&
		mapa[linha][coluna + 1] != CERCA)
		adjacencia = mapa[linha][coluna + 1];

	if (mapa[linha][coluna - 1] != VAZIO &&
		mapa[linha][coluna - 1] != CERCA)
		adjacencia = mapa[linha][coluna - 1];

	return adjacencia;
}

bool verificar_casa_valida(int linha, int coluna)
{
	bool passou = false;

	if (linha >= 0 && linha < TAMANHO_MATRIZ_PRINCIPAL &&
		coluna >= 0 && coluna < TAMANHO_MATRIZ_PRINCIPAL &&
		!verificar_casa_livre(linha, coluna))
		passou = true;

	return passou;
}

void movimentar_jogador(int &linha, int &coluna, Personagem& jogador)
{
	char tecla;

	cin >> tecla;

	switch (tecla)
	{
	case CIMA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha - 1, coluna))
			linha--;
		break;
	case BAIXO:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha + 1, coluna))
			linha++;
		break;
	case ESQUERDA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha, coluna - 1))
			coluna--;
		break;
	case DIREITA:
		mapa[linha][coluna] = VAZIO;
		if (verificar_casa_valida(linha, coluna + 1))
			coluna++;
		break;
	case ACAO:
		executar_acao_jogador(verificar_adjacencia(linha, coluna), jogador);
		break;
	default:
		cout << "enter";
		break;
	}

	mapa[linha][coluna] = JOGADOR;
}

int perseguir_jogador(int linhaJogador, int colunaJogador, int &linhaOponetne, int &colunaOponete, bool ja_foi)
{
	if (!ja_foi)
		return NADA;

	if (linhaJogador > linhaOponetne && verificar_casa_valida(linhaOponetne + 1, colunaOponete))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne += 1, colunaOponete, false);
	else if (linhaJogador < linhaOponetne && verificar_casa_valida(linhaOponetne - 1, colunaOponete))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne -= 1, colunaOponete, false);

	if (colunaJogador > colunaOponete && verificar_casa_valida(linhaOponetne, colunaOponete + 1))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete += 1, false);
	else if (colunaJogador < colunaOponete && verificar_casa_valida(linhaOponetne, colunaOponete - 1))
		return perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete -= 1, false);
}

void gerar_oponentes(Personagem oponente[NUMERO_OPONENTES])
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
	{
		oponente[indice].linha[indice] = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
		oponente[indice].coluna[indice] = rand() % TAMANHO_MATRIZ_PRINCIPAL - 1;
	}

	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		mapa[oponente[indice].linha[indice]][oponente[indice].coluna[indice]] = OPONENTE;
}

void mover_oponentes(int linhaJogador, int colunaJogador, int &linhaOponetne, int &colunaOponete)
{
	mapa[linhaOponetne][colunaOponete] = VAZIO;
	perseguir_jogador(linhaJogador, colunaJogador, linhaOponetne, colunaOponete, true);
	mapa[linhaOponetne][colunaOponete] = OPONENTE;
}

void movimentar_oponentes(Personagem oponente[NUMERO_OPONENTES], int linhaJogador, int colunaJogador)
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		if (oponente[indice].vivo)
			mover_oponentes(linhaJogador, colunaJogador, oponente[indice].linha[indice], oponente[indice].coluna[indice]);
}

void matar_oponente(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente)
{
	mapa[oponente[numero_oponente].linha[numero_oponente]][oponente[numero_oponente].coluna[numero_oponente]] = ' ';
	oponente[numero_oponente].vivo = false;
}

int verificar_monstros_vivos(Personagem jogador)
{
	int numero_de_monstro_vivo = 0;

	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
		if (jogador.pokemon[indice].vida > NADA)
			numero_de_monstro_vivo++;

	return numero_de_monstro_vivo;
}

bool vantagem(char tipo_um, char tipo_dois)
{
	//Elétrico -> Voador -> Grama -> Água -> Fogo -> Elétrico

	char tabela_vantagem[5] = { ELETRICO,VOADOR,GRAMA,AGUA,FOGO };

	int t_um, t_dois;

	bool vantage = false;

	if (tipo_um == FOGO && tipo_dois == ELETRICO)
		vantage = true;

	for (int indice = 0; indice < 5; indice++)
		if (tipo_um == tabela_vantagem[indice])
			t_um = indice;

	for (int indice = 0; indice < 5; indice++)
		if (tipo_dois == tabela_vantagem[indice])
			t_dois = indice;

	if (t_um < t_dois)
		vantage = true;

	return vantage;
}

void dano_ataque_oponente(Personagem& jogador, Personagem& oponente, int numero_monstro, int golpe_escolhido, int monstro_oponente, bool modificador)
{
	int dano = 0,
		modificador_um = rand() % 15,
		modificador_dois = 1;

	if (modificador)
		modificador_dois = 1.5;

	dano = ((modificador_um + (jogador.pokemon[numero_monstro].ataque +
		jogador.pokemon[numero_monstro].golpes[golpe_escolhido].poder)) * modificador_dois) - oponente.pokemon[monstro_oponente].defesa;

	dano_causado("Oponente", dano);

	oponente.pokemon[monstro_oponente].vida -= dano;

	jogador.pokemon[numero_monstro].golpes[golpe_escolhido].utilizacoes--;

	mostrar_vida_restante(oponente, monstro_oponente);
}

void dano_ataque_jogador(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente, int numero_monstro, int golpe_escolhido, bool modificador)
{
	int dano = 0,
		modificador_um = rand() % 15,
		modificador_dois = 1;

	if (modificador)
		modificador_dois = 1.5;

	dano = ((modificador_um + (jogador.pokemon[numero_monstro].ataque +
		jogador.pokemon[numero_monstro].golpes[golpe_escolhido].poder)) * modificador_dois) - oponente[numero_oponente].pokemon[numero_monstro].defesa;

	dano_causado("Jogador", dano);

	oponente[numero_oponente].pokemon[numero_monstro].vida -= dano;

	jogador.pokemon[numero_monstro].golpes[golpe_escolhido].utilizacoes--;

	mostrar_vida_restante(oponente[numero_oponente], numero_monstro);
}

bool vez_do_player(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente)
{
	bool vez = false;

	for (int indice = 0; indice < NUMERO_MONSTROS_JOGADOR; indice++)
		for (int contador = 0; contador < NUMERO_MONSTROS_JOGADOR; contador++)
			if (jogador.pokemon[indice].vida > NADA)
				if (jogador.pokemon[indice].velocidade > oponente[numero_oponente].pokemon[contador].velocidade)
					vez = true;

	return vez;
}

void fazer_ataque_oponente(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente, int monstro_jogador)
{
	int monstro_escolhido = 0,
		golpe_aleatorio = rand() % NUMERO_GOLPES;

	bool vantage = vantagem(oponente[numero_oponente].pokemon[monstro_escolhido].tipo, jogador.pokemon[monstro_jogador].tipo);

	if (oponente[numero_oponente].pokemon[monstro_escolhido].vida < NADA)
		monstro_escolhido = 1;

	dano_ataque_oponente(oponente[numero_oponente], jogador, monstro_escolhido, golpe_aleatorio, monstro_jogador, vantage);
}

void fazer_ataque_jogador(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente, int monstro_escolhido, int golpe_escolhido)
{
	bool modificador = vantagem(jogador.pokemon[monstro_escolhido].tipo, oponente[numero_oponente].pokemon[monstro_escolhido].tipo);
	dano_ataque_jogador(jogador, oponente, numero_oponente, monstro_escolhido, golpe_escolhido, modificador);
}

void escolhas_pre_combate_jogador(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente)
{
	bool ordem_jogar;

	int monstro_escolhido;

	listar_status_pokemon_jogador(jogador, "Jogador");
	listar_status_pokemon_jogador(oponente[numero_oponente], "Oponente");


	ordem_jogar = vez_do_player(jogador, oponente, numero_oponente);
	monstro_escolhido = menu_escolha_monstro(jogador);

	if (verificar_monstros_vivos(jogador) > NADA)
	{
		while (jogador.pokemon[monstro_escolhido].vida >= NADA && verificar_monstros_vivos(oponente[numero_oponente]) > NADA)
		{
			if (ordem_jogar)
				fazer_ataque_jogador(jogador, oponente, numero_oponente, monstro_escolhido, menu_escolha_ataque(jogador, monstro_escolhido));
			else
				ordem_jogar = true;

			if (verificar_monstros_vivos(oponente[numero_oponente]) > NADA)
				fazer_ataque_oponente(jogador, oponente, numero_oponente, monstro_escolhido);
			else
				matar_oponente(jogador, oponente, numero_oponente);
		}

		if (jogador.pokemon[monstro_escolhido].vida <= NADA)
		{
			perdeu_monstro();
			escolhas_pre_combate_jogador(jogador, oponente, numero_oponente);
		}
		else
		{
			venceu_batalha();
			listar_status_pokemon_jogador(jogador, "Jogador");
		}
	}
	else
		fim_de_jogo();
}

void iniciar_combate_oponente(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES], int numero_oponente)
{
	system("cls");

	aviso_combate();

	escolhas_pre_combate_jogador(jogador, oponente, numero_oponente);

	cin.get();
	cin.get();
}

void verificar_possivel_batalha(Personagem& jogador, Personagem oponente[NUMERO_OPONENTES])
{
	for (int indice = 0; indice < NUMERO_OPONENTES; indice++)
		if (verificar_adjacencia(oponente[indice].linha[indice], oponente[indice].coluna[indice]) == JOGADOR)
			iniciar_combate_oponente(jogador, oponente, indice);
}

