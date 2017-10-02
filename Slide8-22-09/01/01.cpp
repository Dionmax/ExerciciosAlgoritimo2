// 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

template <typename T>
void trocar_valor_entre_variaveis(T &variavel_A, T &variavel_B)
{
	T variavel_aux = variavel_A;

	variavel_A = variavel_B;

	variavel_B = variavel_aux;
}

int main()
{
	int A = 5,
		B = 6;

	trocar_valor_entre_variaveis(A, B);

	cout << A << endl << B;

	cin.get();

    return 0;
}

