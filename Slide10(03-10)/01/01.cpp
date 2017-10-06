// 01.cpp : Defines the entry point for the console application.
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

int potencia_recursiva(int base, int expoente)
{
	if (expoente == 1)
		return base;
	else
		return potencia_recursiva(base += base, expoente - 1);
}


int main()
{
	int numero = 2;

	numero = potencia_recursiva(numero,10);

	escreva(numero);

	cin.get();

    return 0;
}

