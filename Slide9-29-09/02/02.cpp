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

int escrever_recursivamente(int numero,int limite)
{
	escreva(numero);

	if (numero == limite)
		return -1;
	else
		return escrever_recursivamente(numero + 1 , limite);
}

int main()
{
	escrever_recursivamente(1,20);

	cin.get();

	return 0;
}

