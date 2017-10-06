// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "OperacaoArrays.h"

using namespace std;


int main()
{
	int array[5] = {1,9,6,4,3};

	//bubblesort<int>(array,5,ORDENACAO_CRESCENTE);

	//inverter_ordem<int>(array, 5);

	int a = 0;

	a = encontrar_maior_valor<int>(array, 5);

	cout << a;

	cin.get();

    return 0;
}

