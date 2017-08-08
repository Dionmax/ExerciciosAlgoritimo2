// Testes.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int MEDIA_GERAL = 3;

void mensagemInicial()
{
	cout << "=== Apresentação 01. ===\n";

	cout << "Olá mundo. \n";

	cin.get();

	system("cls");
}

void NomeIdade()
{
	cout << "=== Nome e Idade 02. ===\n";

	string nome, aguarde;
	int idade;

	cout << "Digite seu nome: ";
	cin >> nome, "\n";
	cout << "Digite sua idade: ";
	cin >> idade;
	cout << "Seu nome é " << nome << ", e você possui " << idade << " anos.";

	cin.get();
	cin.get();

	system("cls");
}

void SomaBasica()
{
	cout << "=== Soma de Três Valores 03. ===\n";

	int	numeros[MEDIA_GERAL],
		total = 0;

	cout << "Digite três " << MEDIA_GERAL << " valores para ser somado. \n";
	cin >> numeros[0] >> numeros[1] >> numeros[2];

	for (int contador = 0; contador < MEDIA_GERAL; contador++)
		total += numeros[contador];

	cout << "O total foi " << total << ".\n";

	cin.get();
	cin.get();
	system("cls");
}

void CalculoCirculo()
{
	cout << "=== Cálculo Sobre Círculo 04. ===\n";
	double raio;

	cout << "\nDigite o raio de um círculo: ";

	cin >> raio;

	cout << "\nPerímetro: " << 6.28*raio << "~";
	cout << "\nÁrea: " << 3.14 * (raio*raio) << "~";

	cin.get();
	cin.get();
	system("cls");
}

void CalculoMedias()
{
	cout << "=== Cálculo das Médias 05. ===\n";

	double
		notas[MEDIA_GERAL],
		media = 0;

	cout << "Digite as notas do aluno(a):\n";
	cin >> notas[0] >> notas[1] >> notas[2];

	for (int contador = 0; contador < MEDIA_GERAL; contador++)
		media += notas[contador];

	cout << "\nA média foi: " << media / 3;

	cin.get();
	cin.get();
	system("cls");
}

void CalculoMediaPonderada()
{
	cout << "=== Cálculo das Médias Ponderadas 06. ===\n";

	double
		notas[MEDIA_GERAL],
		media;

	cout << "Digite as notas do Aluno:\n";
	cin >> notas[0] >> notas[1] >> notas[2];

	media = notas[0] * 2 + notas[1] * 4 + notas[2] * 4;

	cout << "\nA média ponderada do aluno é: " << media / 10;

	cin.get();
	cin.get();
	system("cls");
}

void CalculoSalarial()
{
	cout << "=== Cálculo do Aumento Salarial 07. ===\n";

	double	salario,
		reajuste,
		salarioreajustado;

	cout << "Digite seu Salário atual:\n";
	cin >> salario;
	cout << "Digite o valor do reajuste anual em Porcentagem:\n";
	cin >> reajuste;

	salarioreajustado = salario + salario * (reajuste / 100);

	cout << "\nO valor do seu salário para o próximo ano será: " << salarioreajustado;

	cin.get();
	cin.get();
	system("cls");
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	mensagemInicial();
	NomeIdade();
	SomaBasica();
	CalculoCirculo();
	CalculoMedias();
	CalculoMediaPonderada();
	CalculoSalarial();

	return 0;
}