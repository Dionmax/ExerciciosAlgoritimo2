// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "SuporteEscrita.h"
#include "SuporteStructs.h"

using namespace std;

bool dados_alunos(int numero_aluno)
{
	bool manter = true;

	Aluno aluno[NUMERO_ALUNOS];

	gerar_nomes(aluno);

	switch (numero_aluno)
	{
	case 0:
		gerar_notas(aluno[0]);
		escrever_dados(aluno[0]);
		break;

	case 1:
		gerar_notas(aluno[1]);
		escrever_dados(aluno[1]);
		break;

	case 2:
		gerar_notas(aluno[2]);
		escrever_dados(aluno[2]);
		break;

	case 3:
		gerar_notas(aluno[3]);
		escrever_dados(aluno[3]);
		break;

	case 4:
		gerar_notas(aluno[4]);
		escrever_dados(aluno[4]);
		break;
	case 5:
		manter = false;
	default:
		break;
	}

	return manter;
}

int escolhas()
{
	int escolha = 0;

	cout << "Escolhas disponiveis para alunos: 1 a 5." << endl << "Sair : 6" << endl;

	do
	{
		cin >> escolha;
		escolha -= 1;

	} while (dados_alunos(escolha));

	return escolha;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(NULL));

	escolhas();

	cin.get();

    return 0;
}

