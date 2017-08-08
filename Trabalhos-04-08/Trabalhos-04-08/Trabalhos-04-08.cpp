// Testes.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int MEDIA_GERAL = 3;

void mensagemInicial()
{
	cout << "=== Apresenta��o 01. ===\n";

	cout << "Ol� mundo. \n";

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
	cout << "Seu nome � " << nome << ", e voc� possui " << idade << " anos.";

	cin.get();
	cin.get();

	system("cls");
}

void SomaBasica()
{
	cout << "=== Soma de Tr�s Valores 03. ===\n";

	int	numeros[MEDIA_GERAL],
		total = 0;

	cout << "Digite tr�s " << MEDIA_GERAL << " valores para ser somado. \n";
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
	cout << "=== C�lculo Sobre C�rculo 04. ===\n";
	double raio;

	cout << "\nDigite o raio de um c�rculo: ";

	cin >> raio;

	cout << "\nPer�metro: " << 6.28*raio << "~";
	cout << "\n�rea: " << 3.14 * (raio*raio) << "~";

	cin.get();
	cin.get();
	system("cls");
}

void CalculoMedias()
{
	cout << "=== C�lculo das M�dias 05. ===\n";

	double
		notas[MEDIA_GERAL],
		media = 0;

	cout << "Digite as notas do aluno(a):\n";
	cin >> notas[0] >> notas[1] >> notas[2];

	for (int contador = 0; contador < MEDIA_GERAL; contador++)
		media += notas[contador];

	cout << "\nA m�dia foi: " << media / 3;

	cin.get();
	cin.get();
	system("cls");
}

void CalculoMediaPonderada()
{
	cout << "=== C�lculo das M�dias Ponderadas 06. ===\n";

	double
		notas[MEDIA_GERAL],
		media;

	cout << "Digite as notas do Aluno:\n";
	cin >> notas[0] >> notas[1] >> notas[2];

	media = notas[0] * 2 + notas[1] * 4 + notas[2] * 4;

	cout << "\nA m�dia ponderada do aluno �: " << media / 10;

	cin.get();
	cin.get();
	system("cls");
}

void CalculoSalarial()
{
	cout << "=== C�lculo do Aumento Salarial 07. ===\n";

	double	salario,
		reajuste,
		salarioreajustado;

	cout << "Digite seu Sal�rio atual:\n";
	cin >> salario;
	cout << "Digite o valor do reajuste anual em Porcentagem:\n";
	cin >> reajuste;

	salarioreajustado = salario + salario * (reajuste / 100);

	cout << "\nO valor do seu sal�rio para o pr�ximo ano ser�: " << salarioreajustado;

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