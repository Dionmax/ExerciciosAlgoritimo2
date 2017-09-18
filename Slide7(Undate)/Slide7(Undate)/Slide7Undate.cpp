// Slide7Undate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdio.h>

#include "escrevaeler.h"

using namespace std;

int main()
{
	int matriz[2][2] = { 0,0,0,0 };
	int matriz1[3][3] = { 0,0,0,0,1,1,8,8,7 };
	int vetor[5] = { 5,3,2,4,1 };
	int numero = 0;

	leia(numero);

	cout << endl;

	escreva(numero);

	cin.get();

    return 0;
}

