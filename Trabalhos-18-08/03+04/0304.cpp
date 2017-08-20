// 0304.cpp: Define o ponto de entrada para a aplicação de console.
//Exercicio 03 + 04

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>

using namespace std;

string impar_ou_par(int numero)
{
	if (numero % 2 == 0)
		return  "Verdadeiro (par)";
	else
		return "Falso (ímpar)";
}

int dobro(int numero)
{
	return numero * 2;
}

void operacoes()
{
	bool manter_ativo = true;

	char escolha;

	int numero = 0;

	do
	{
		cout << endl << "Deseja realizar qual operação?" << endl;
		cout << "1 - Dobrar um número." << endl;
		cout << "2 - Verificar -> Par || Ímpar." << endl;
		cout << "3- Sair." << endl;

		cin >> escolha;

		switch (escolha)
		{
		case '1':
			cout << "Insira um número:" << endl;
			cin >> numero;
			cout << "O dobro do seu número é: " << dobro(numero);
			break;

		case '2':
			cout << "Insira um número:" << endl;
			cin >> numero;
			cout << "Seu número é : " << impar_ou_par(numero);
			break;

			case '3':
				manter_ativo = false;
				break;
		default:
			cout << "Opção inválida!" << endl;
			break;
		}


	} while (manter_ativo);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	operacoes();

    return 0;
}

