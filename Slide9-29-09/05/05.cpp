// 05.cpp : Defines the entry point for the console application.
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

bool palindromo(string palavra)
{
	int tamanho = palavra.size();

	string inicio_da_palavra,
			fim_da_palavra;

	if (tamanho == 1 || tamanho == 0)
		return true;

	inicio_da_palavra = palavra.substr(0, 1);
	fim_da_palavra = palavra.substr(tamanho - 1, 1);

	if (inicio_da_palavra == fim_da_palavra)
		return palindromo(palavra.substr(1, tamanho - 2));
	else
		return false;
}


int main()
{
	string palavra = "ababa";

	bool palidromo = false;

	palidromo = palindromo(palavra);

	escreva(palidromo);

	cin.get();

    return 0;
}

