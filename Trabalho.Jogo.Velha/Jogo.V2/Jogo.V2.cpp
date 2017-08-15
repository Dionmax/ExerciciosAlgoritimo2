// Jogo.2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int
TAMANHO = 3,
JOGADOR1 = 1,
JOGADOR2 = 2;

int verificacao_casa(int casa)
{
	static int casas_disp[TAMANHO * TAMANHO] = { 0 };

	int verificacao_casa = casa;
	verificacao_casa = casa - 1;

	if (casas_disp[verificacao_casa] == 0)
	{
		casas_disp[verificacao_casa] = 1;
		return casa;
	}
	else
		return casa = -1;

}

bool matriz_jogo(int casa, char jogada, bool jogada_vez)
{
	int ponteiro_matriz;

	static string matriz_casas[TAMANHO][TAMANHO];

	for (int coluna = 0; coluna < TAMANHO; coluna++)
		for (int linha = 0; linha < TAMANHO; linha++)
		{
			ponteiro_matriz = linha * TAMANHO + coluna;
			if (ponteiro_matriz == casa - 1)
				matriz_casas[linha][coluna] = jogada;
		}

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		cout << "|";

		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz_casas[cont][cont2] << "	|";

		cout << endl;
	}

	if (jogada_vez)
		return jogada_vez = false;
	else
		return jogada_vez = true;
}

void representacao_casas()
{
	int matriz_location[TAMANHO][TAMANHO],
		ponteiro_matriz = 0;

	for (int coluna = 0; coluna < TAMANHO; coluna++)
		for (int linha = 0; linha < TAMANHO; linha++)
		{
			ponteiro_matriz = coluna * TAMANHO + linha;
			matriz_location[coluna][linha] = ponteiro_matriz + 1;
		}

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		cout << "|";

		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz_location[cont][cont2] << "	|";

		cout << endl;
	}
}

void inicio_jogo()
{
	int casa = 0;

	bool jogada_vez;

	char jogador;

	cout << "Essas são as posições das casas:" << endl;
	representacao_casas();

	cout << endl;
	cout << endl;

	cout << "Escolha 'X' or 'O' :" << endl;
	cin >> jogador;

	if (jogador == 'x' || jogador == 'X')
		jogada_vez = true;
	else
		jogada_vez = false;

	system("cls");

	while (true)
	{
		cout << "Escolha uma casa:" << endl;
		cin >> casa;

		casa = verificacao_casa(casa);

		if (casa > 0 && casa < TAMANHO * TAMANHO + 1)
		{
			if (jogada_vez)
				jogada_vez = matriz_jogo(casa, 'X', jogada_vez);
			else
				jogada_vez = matriz_jogo(casa, 'O', jogada_vez);
		}
		else
			cout << "Casa Inesistente/Ocupada escolha outra:" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	inicio_jogo();

	return 0;
}
