// Jogo.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 3;

void casas_disponivel()
{

}

void matriz_jogo(string array_casas[])
{
	int ponteiro_matriz = 0;

	string matriz_casas[TAMANHO][TAMANHO];

	for (int coluna = 0; coluna < TAMANHO; coluna++)
		for (int linha = 0; linha < TAMANHO; linha++)
		{
			ponteiro_matriz = coluna * TAMANHO + linha;
			matriz_casas[coluna][linha] = "-";
		}

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		cout << "|";

		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz_casas[cont][cont2] << "	|";

		cout << endl;
	}

}

void representacao_casas()
{
	int matriz_location[TAMANHO][TAMANHO],
		ponteiro_matriz=0;

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
	int casas = 0;

	string array_casas[TAMANHO*TAMANHO];

	cout << "Essas são as posições das casas:" << endl;
	representacao_casas();

	cout << endl;
	cout << endl;

	cout << "Escolha uma casa:" << endl;
	matriz_jogo(array_casas);
	cin >> casas;

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	inicio_jogo();

    return 0;
}

