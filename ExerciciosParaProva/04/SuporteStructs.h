#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

const int NADA = 0;
const int NUMERO_NOTAS = 3;
const int NUMERO_MEDIAS = 3;
const int NUMERO_ALUNOS = 5;
const int NUMERO_MATERIAS = 5;

const string MATERIAS_NOMES[NUMERO_MATERIAS] = { "Metodologia","Ingles","Circuitos","Calculo","Algoritimos" };
const string NOMES_ALUNO[NUMERO_ALUNOS] = {"Yugi","Joey","Tristan","Tea","Bakura"};
const string EMAIL[NUMERO_ALUNOS] = { "Yugi@msn.com","Joey@msn.com","Tristan@msn.com","Téa@msn.com","Bakura@msn.com" };

struct Medias
{
	double nota[NUMERO_NOTAS];

	void gerar_notas()
	{
		for (int indice = 0; indice < NUMERO_NOTAS; indice++)
			nota[indice] = rand() % 10;
	}
};

struct Materias
{
	string nome[NUMERO_MATERIAS];

	Medias media[NUMERO_MEDIAS];

	double media_final_notas[NUMERO_NOTAS];

	double calculo_media_final_notas(int numero_media)
	{
		double total = 0;

		for (int indice = 0; indice < NUMERO_NOTAS; indice++)
			total += media[numero_media].nota[indice];

		return total / NUMERO_NOTAS;
	}
};

struct Aluno
{
	string nome[NUMERO_ALUNOS],
			email[NUMERO_ALUNOS];

	Materias materia[NUMERO_MATERIAS];

	double media_final_materia[NUMERO_MATERIAS];

	double calculo_media_final_materia(int numero_materia)
	{
		double total = 0;

		for (int indice = 0; indice < NUMERO_MEDIAS; indice++)
			total += materia[numero_materia].media_final_notas[indice];

		return total / NUMERO_MEDIAS;
	}
};

void gerar_notas(Aluno &aluno)
{
	for (int contador_materia = 0; contador_materia < NUMERO_MATERIAS; contador_materia++)
	{
		for (int contador_medias = 0; contador_medias < NUMERO_MEDIAS; contador_medias++)
		{
			for (int contador_notas = 0; contador_notas < NUMERO_NOTAS; contador_notas++)
				aluno.materia[contador_materia].media[contador_notas].gerar_notas();

			aluno.materia[contador_materia].media_final_notas[contador_medias] = aluno.materia[contador_materia].calculo_media_final_notas(contador_medias);
		}

		aluno.media_final_materia[contador_materia] = aluno.calculo_media_final_materia(contador_materia);
	}
}

void gerar_nomes(Aluno aluno[])
{
	for (int contador = 0; contador < NUMERO_ALUNOS; contador++)
	{
		*aluno[contador].nome = NOMES_ALUNO[contador];
		*aluno[contador].email = EMAIL[contador];
		
		for (int contador_materias = 0; contador_materias < NUMERO_MATERIAS; contador_materias++)
			aluno[contador].materia[contador_materias].nome[contador_materias] = MATERIAS_NOMES[contador_materias];
	}
}
