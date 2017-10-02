// 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

template <typename T>
void receber_variavel(T variavel)
{
	cout << variavel;
}

int main()
{
	int numero_qualquer = 100;

	receber_variavel<int>(numero_qualquer);

	cin.get();

    return 0;
}

