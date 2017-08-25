// 01.cpp : Define o ponto de entrada para a aplicação de console.
// Função não modularizada (sad)

#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdlib.h>

using namespace std;

string media_final_aluno(int prova_um, int prova_dois)
{
	if ((prova_um + prova_dois) / 2 >= 6)
		return "Aprovado!";
	else
		return "Reprovado!";
}

void entrada_notas()
{
	int prova_um,
		prova_dois;

	cout << "Insira a nota das 2 provas:" << endl;
	cin >> prova_um >> prova_dois;

	cout << "Você foi " << media_final_aluno(prova_um, prova_dois);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	entrada_notas();

	cin.get();
	cin.get();

    return 0;
}

