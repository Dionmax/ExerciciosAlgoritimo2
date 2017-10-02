// 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

template <typename T>
T ler_variavel()
{
	T variavel;

	cin >> variavel;

	return variavel;
}

int main()
{
	int variavel = 0;

	variavel = ler_variavel<int>();

	cin.get();

    return 0;
}

