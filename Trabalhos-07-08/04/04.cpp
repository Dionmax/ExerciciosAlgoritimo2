// 04.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string alfabeto(char letra)
{
	switch (letra)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		return "vogal.";
		break;

	default:
		return "consoante.";
		break;
	}
}

void solicitacao()
{
	char letra;

	cout << "Insira uma letra: ";

	cin >> letra;

	cout << "A letra inserida foi uma: " << alfabeto(letra);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	solicitacao();

    return 0;
}

