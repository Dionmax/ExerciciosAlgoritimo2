// 41.cpp : Defines the entry point for the console application.
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
};


struct Aluno
{
	string nome[NUMERO_ALUNOS],
		email[NUMERO_ALUNOS];

	Materias materia[NUMERO_MATERIAS];
};

void teste()
{
	Aluno aluno;

	aluno.materia[0].media[0].nota[0] = 1.2;

}

int main()
{
	teste();

	cin.get();
    return 0;
}
