// 04.cpp : Defines the entry point for the console application.
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

int fibonacci_recursivo(int numero)
{
	if (numero == 1 || numero == 2)
		return 1;
	else
		return fibonacci_recursivo(numero - 1) + fibonacci_recursivo(numero - 2);
}

int main()
{
	for (int numero = 0; numero < 10; numero++)
		escreva(fibonacci_recursivo(numero + 1));

	cin.get();

    return 0;
}

