// Funçãoteste.cpp: Define o ponto de entrada para a aplicação de console.
// "I do Problems"

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>
#include <time.h>
#include "AtividadeVetores.h"

using namespace std;

const int TAMANHO = 5;

void testes_matrizes()
{
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];

	for (int contador = 0; contador < TAMANHO_MATRIZ; contador++)
		for (int indice = 0; indice < TAMANHO_MATRIZ; indice++)
			matriz[contador][indice] = rand() % 100;

	for (int contador = 0; contador < TAMANHO_MATRIZ; contador++)
	{
		for (int indice = 0; indice < TAMANHO_MATRIZ; indice++)
			cout << matriz[contador][indice] << "	|";

		cout << endl;
	}

	cout << endl << "O maior valor da diagonal principal da matriz é: " << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL);
	cout << endl << "O maior valor da diagonal secundaria da matriz é: " << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA);
	cout << endl << "O maior valor das diagonais da matriz é: " << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONAIS);
	cout << endl << "O maior valor da matriz é: " << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_COMPLETA);

	cout << endl << endl;

	cout << endl << "O menor valor da diagonal principal da matriz é: " << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL);
	cout << endl << "O menor valor da diagonal secundaria da matriz é: " << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA);
	cout << endl << "O menor valor das diagonais da matriz é: " << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONAIS);
	cout << endl << "O menor valor da matriz é: " << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_COMPLETA);
}

void testes_vetores(int vetor[])
{
	int maior = 0,
		menor = 0;

	maior = maiorValorEmVetor(vetor, TAMANHO);	
	menor = menorValorEmVetor(vetor, TAMANHO);

	cout << "O maior numero do vetor foi: " << maior << endl;
	cout << "O menor numero do vetor foi: " << menor;

	cout << endl << endl;
}

void testes_bubbleSort(int vetor[])
{
	cout << "Vetor em ordem Crescente : ";
	bubbleSort(vetor, TAMANHO, true);

	cout << endl;

	cout << "Vetor em ordem decrescente : ";
	bubbleSort(vetor, TAMANHO, false);

	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));

	int vetor[TAMANHO] = { 3,2,4,5,1, };

	testes_bubbleSort(vetor);
	testes_vetores(vetor);
	testes_matrizes();

	cin.get();
	cin.get();

    return 0;
}

