// DesafioLabirinto.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <stack>

using namespace std;

const int TAMANHO = 6;

int prencher_matriz(int matriz[][TAMANHO],int posicao_1,int posicao_2)
{
	int linha = posicao_1 -1,
		coluna = posicao_2 -1;

	matriz[linha][coluna] = 1;

	return 0;
}

void representacao_matriz()
{
	int matriz[TAMANHO][TAMANHO] = { 0 },
		vertices[] = {1,2,3,4,5,6},
		vertice_inicial = 1;

	prencher_matriz(matriz, 1, 2);
	prencher_matriz(matriz, 1, 3);
	prencher_matriz(matriz, 2, 3);
	prencher_matriz(matriz, 2, 4);
	prencher_matriz(matriz, 2, 5);
	prencher_matriz(matriz, 3, 1);
	prencher_matriz(matriz, 3, 2);
	prencher_matriz(matriz, 3, 5);
	prencher_matriz(matriz, 4, 6);
	prencher_matriz(matriz, 5, 2);
	prencher_matriz(matriz, 6, 5);

	for (int linha = 0; linha < TAMANHO; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO; coluna++)
			cout << matriz[linha][coluna] << "	|";

	cout << endl;
	}

	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	representacao_matriz();

    return 0;
}

