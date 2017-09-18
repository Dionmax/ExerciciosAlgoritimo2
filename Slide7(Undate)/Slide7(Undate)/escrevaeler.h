#ifndef ESCREVAELER_H
#define ESCREVAELER_H

#include <iostream>
#include <math.h>

using namespace std;

void escreva(int matriz[2][2], int tamanho)
{
	for (int linha = 0; linha < tamanho; linha++)
	{
		for (int coluna = 0; coluna < tamanho; coluna++)
			cout << matriz[linha][coluna];
		cout << endl;
	}
}

void escreva(int matriz[3][3], int tamanho)
{
	for (int linha = 0; linha < tamanho; linha++)
	{
		for (int coluna = 0; coluna < tamanho; coluna++)
			cout << matriz[linha][coluna];
		cout << endl;
	}
}

void escreva(int matriz[4][4], int tamanho)
{
	for (int linha = 0; linha < tamanho; linha++)
	{
		for (int coluna = 0; coluna < tamanho; coluna++)
			cout << matriz[linha][coluna];
		cout << endl;
	}
}

void escreva(int matriz[5][5], int tamanho)
{
	for (int linha = 0; linha < tamanho; linha++)
	{
		for (int coluna = 0; coluna < tamanho; coluna++)
			cout << matriz[linha][coluna];
		cout << endl;
	}
}

void escreva(int vetor[], int tamanho)
{
	for (int contador = 0; contador < tamanho; contador++)
	{
		cout << vetor[contador] << ",";
	}
}

void escreva(int &numero)
{
	cout << numero;
}

void escreva(float &numero)
{
	cout << numero;
}

void escreva(bool &logico)
{
	cout << logico;
}

void escreva(string &texto)
{
	cout << texto;
}

void leia(string &valor)
{
	cin >> valor;
}

void leia(bool &valor)
{
	cin >> valor;
}

void leia(float &valor)
{
	cin >> valor;
}

void leia(int &valor)
{
	cin >> valor;
}

void leia(char &valor)
{
	cin >> valor;
}

#endif // !ESCREVAELER_H
