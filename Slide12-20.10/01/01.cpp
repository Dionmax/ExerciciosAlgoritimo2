// 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void escreva(T alguma_coisa)
{
	cout << alguma_coisa << endl;
}

void espaco()
{
	escreva(" ");
}

struct Cadastro
{
	string nome;
	int idade;
	int cpf;
};

void escrever_dados(Cadastro cliente)
{
	cout << "Cliente: ";
	escreva(cliente.nome);

	cout << "Idade: ";
	escreva(cliente.idade);

	cout << "CPF: ";
	escreva(cliente.cpf);
}

void receber_dados(Cadastro &cliente)
{
	cout << "Digite o nome do cliente:" << endl;
	cin >> cliente.nome;

	cout << "Digite a idade do cliente:" << endl;
	cin >> cliente.idade;

	cout << "Digite o CPF do cliente:" << endl;
	cin >> cliente.cpf;

	espaco();
}

int main()
{
	Cadastro cliente;

	receber_dados(cliente);

	escrever_dados(cliente);

	cin.get();
	cin.get();

	return 0;
}
