// 01.cpp : Defines the entry point for the console application.
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

int contador_recursivo(int numero_um, int numero_dois)
{
	escreva(numero_um,true);

	if (numero_um == numero_dois)
		return NADA;

	if(numero_um > numero_dois)
		contador_recursivo(numero_um - 1, numero_dois);
	else
		contador_recursivo(numero_um + 1, numero_dois);
}

int main()
{
	contador_recursivo(5, 1);

	cout << endl;

	contador_recursivo(1, 5);

	
	cin.get();

    return 0;
}

