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

template <typename T>
void escreva(T alguma_coisa, bool espaco = false)
{
	cout << alguma_coisa;

	if (espaco)
		cout << " ";
}

struct Medias
{
	double nota[NUMERO_NOTAS];
};

struct Materias
{
	string nome;

	Medias media[NUMERO_MEDIAS];

	double media_final_materia()
	{
		double total = 0;

		for (int indice = 0; indice < NUMERO_NOTAS; indice++)
			total += media->nota[indice];

		return total / 3;
	}

};

struct Aluno
{
	string nome[NUMERO_ALUNOS],
		email[NUMERO_ALUNOS];

	Materias materia[NUMERO_ALUNOS];
};

void escrever_dados(Aluno aluno)
{
	//for(int indice = 0; indice < NUMERO_ALUNOS; indice ++)

	cout << aluno.nome[0] << endl;
	cout << aluno.email[0] << endl;
	cout << aluno.materia[0].nome << endl;
	cout << aluno.materia->media_final_materia() << endl;
}

void dados_alunos(int aluno)
{
	Aluno aluno_um,
		aluno_dois,
		aluno_tres,
		aluno_quatro,
		aluno_cinco;

	switch (aluno)
	{
	case 0:
		aluno_um.nome[0] = "Dion";
		aluno_um.email[0] = "dionmaxfn@gmail.com";
		aluno_um.materia[0].nome = "ingles";
		aluno_um.materia[0].media->nota[0] = 8.5;
		aluno_um.materia[0].media->nota[1] = 7;
		aluno_um.materia[0].media->nota[2] = 9;
		aluno_um.materia[0].media_final_materia();

		escrever_dados(aluno_um);
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

