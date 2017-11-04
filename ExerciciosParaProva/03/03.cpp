// 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int NADA = 0;

template <typename T>
void escreva(T alguma_coisa, bool espaco = false)
{
	cout << alguma_coisa;

	if (espaco)
		cout << " ";
}

int maior_valor(int valor_um, int valor_dois)
{
	int maior = valor_dois;

	if (valor_um > valor_dois)
		maior = valor_um;

	return maior;
}

string maior_valor(string valor_um, string valor_dois)
{
	string maior = valor_dois;

	int tamanho_aux_um = valor_um.length(),
		tamanho_aux_dois = valor_dois.length();

	if (tamanho_aux_um > tamanho_aux_dois)
		maior = valor_um;

	return maior;
}

int main()
{
	escreva(maior_valor("AAAA", "BBB"));

	cout << endl;

	escreva(maior_valor(0, 6));

	cin.get();
    return 0;
}

