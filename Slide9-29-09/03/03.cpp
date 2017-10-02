// 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void escreva(T algo)
{
	cout << algo << endl;
}

template <typename T>
void trocar_valores(T &valor_um, T &valor_dois)
{
	T variavel_aux;

	variavel_aux = valor_um;
	valor_um = valor_dois;
	valor_dois = variavel_aux;
}

void inverter_ordem(string &suporte, int tamanho)
{
	int tamanho_aux = tamanho - 1;

	for (int contador = 0; contador < tamanho / 2; contador++)
	{
		trocar_valores(suporte[contador], suporte[tamanho_aux]);
		tamanho_aux--;
	}
}

string binarizador(string numero_binario, int numero)
{
	if (numero == 0)
		return numero_binario;

	if (numero % 2 == 0)
		return binarizador(numero_binario + "0", numero / 2);
	else
		return binarizador(numero_binario + "1", numero / 2);
}

int transformar_binario(int numero)
{
	string numero_binario = "";

	numero_binario = binarizador(numero_binario, numero);

	int tamanho = numero_binario.size();

	inverter_ordem(numero_binario, tamanho);

	return stoi(numero_binario);
}

int main()
{
	int numero;

	numero = transformar_binario(6);

	escreva(numero);

	cin.get();

    return 0;
}

