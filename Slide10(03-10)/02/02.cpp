// 02.cpp : Defines the entry point for the console application.
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

int sucessor(int numero)
{
	return numero + 1;
}

int somador_recursivo(int numero_um, int numero_dois)
{
	if (numero_dois == 0)
		return numero_um;
	else
		return somador_recursivo(numero_um = sucessor(numero_um),numero_dois -1);
}

int main()
{
	int numero = 5;

	numero = somador_recursivo(numero, 10);

	escreva(numero);

	cin.get();

	return 0;

    return 0;
}

