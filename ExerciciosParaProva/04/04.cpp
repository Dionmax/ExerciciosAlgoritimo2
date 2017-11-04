// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int NADA = 0;
const int NUMERO_NOTAS = 3;
const int NUMERO_MEDIAS = 3;
const int NUMERO_ALUNOS = 5;
const int NUMERO_MATERIAS = 5;


struct Medias
{
	double nota[NUMERO_NOTAS];
};

struct Materias
{
	string nome[NUMERO_MATERIAS];

	Medias media[NUMERO_MEDIAS];

	int media_final(int aluno)
	{
		int total = 0;
		for (int indice = 0; indice < NUMERO_NOTAS; indice++)
		{

		}
	}
};

struct Aluno
{
	string nome[NUMERO_ALUNOS],
		email[NUMERO_ALUNOS];

	Materias materia[NUMERO_MATERIAS];
};

void escrever_dados(Aluno aluno)
{
	//for(int indice = 0; indice < NUMERO_ALUNOS; indice ++)

	cout << aluno.nome[0] << endl;
	cout << aluno.email[0] << endl;
	cout << aluno.materia[0].nome[0] << endl;
	//cout << aluno.materia->media_final_materia(0) << endl;
}

void dados_alunos(int numero_aluno)
{
	Aluno aluno[NUMERO_ALUNOS];

	switch (numero_aluno)
	{
	case 0:
		aluno[0].nome[0] = "Dion";
		aluno[0].email[0] = "dionmaxfn@gmail.com";
		aluno[0].materia[0].nome[0] = "ingles";
		aluno[0].materia[0].media[0].nota[0] = 8.5;
		aluno[0].materia[0].media[0].nota[1] = 7;
		aluno[0].materia[0].media[0].nota[2] = 9;
		//aluno[0].materia[0].media_final_materia(0);

		escrever_dados(aluno[0]);
		break;

	default:
		break;
	}

	return ;
}

int main()
{
	 dados_alunos(0);

	cin.get();

    return 0;
}

