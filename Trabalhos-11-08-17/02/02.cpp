// 02.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TABUADA_LIMITE = 10;

void tabuada()
{
	for (int cont = 1; cont <= TABUADA_LIMITE; cont++)
	{
		for (int conttwo = 1; conttwo <= TABUADA_LIMITE; conttwo++)
		{
			cout << cont << "X" << conttwo << "= " << cont*conttwo << endl;
		}
		cout << endl;
	}

	cin.get();
	cin.get();
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	tabuada();

	return 0;
}