// teste1.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"


using namespace std;

void teste()
{
	double n=0;

	scanf("%d", &n);

	n = n * 3.145 * n;

	printf("%d", n);

	cin.get();
	cin.get();
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	teste();

    return 0;
}

