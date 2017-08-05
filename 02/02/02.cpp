// 02.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	string nome = "";
	int idade = 0, nada = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	cout << "Nome digitado: " << nome << endl;
	cout << "Idade digitada: " << idade;
	cin >> nada;


    return 0;
}

