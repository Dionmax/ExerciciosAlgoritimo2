// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "OperacaoArrays.h"

using namespace std;


int main()
{
	int array[5] = {1,3,2,5,4};

	//bubblesort<int>(array,5,ORDENACAO_CRESCENTE);

	//inverter_ordem<int>(array, 5);

	int a;

	a = encontrar_maior_valor<int>(array, 5);

	cout << a;

	cin.get();

    return 0;
}

