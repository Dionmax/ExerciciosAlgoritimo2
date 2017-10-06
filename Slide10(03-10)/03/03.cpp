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

int procurador_recursivo(int numeros[], int tamanho, int maior = 0)
{
	if (tamanho == 0)
		return maior;
	else
	{
		if (maior < numeros[tamanho - 1])
			maior = numeros[tamanho - 1];

		return procurador_recursivo(numeros, tamanho - 1, maior);
	}
}

int main()
{
	int array[5] = { 1,2,22,4,5 },
		maior = 6;

	maior = procurador_recursivo(array, 5, maior);
		
	escreva(maior);

	cin.get();

    return 0;
}

