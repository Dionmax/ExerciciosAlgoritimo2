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

void mostrar_status_monstros(Pokemon mostros_jogo)
{
	for (int indice = 0; indice < NUMEROS_MONSTROS; indice++)
	{
		cout << "Nome: " << mostros_jogo.nome[indice] << endl;
		cout << "Tipo: " << mostros_jogo.tipo[indice] << endl;
		cout << "Vida: " << mostros_jogo.vida[indice] << endl;
		cout << "Ataque: " << mostros_jogo.ataque[indice] << endl;
		cout << "Defesa: " << mostros_jogo.defesa[indice] << endl;
		cout << "Velocidade: " << mostros_jogo.velocidade[indice] << endl;

		for (int contador = 0; contador < NUMERO_GOLPES; contador++)
		{
			cout << mostros_jogo.golpes[indice].nome[contador] << " ";
			cout << mostros_jogo.golpes[indice].poder[contador] << " ";
			cout << "(" << mostros_jogo.golpes[indice].utilizacoes[contador] << ")" << endl;
		}

		cout << endl;
	}

	cin.get();
}
