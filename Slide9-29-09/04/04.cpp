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

int somador_recursivo(int array[], int tamanho, int total)
{
	if (tamanho == -1)
		return total;
	else
		return somador_recursivo(array, tamanho--, total += array[tamanho]);
}

int main()
{
	int array[5] = { 1,2,3,4,5 },
		total = 0;

	total = somador_recursivo(array, 5, total);

	escreva(total);

	cin.get();

	return 0;
}

