// 01.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <locale.h>
#include <stdio.h>
#include "Validacoes.h"

using namespace std;

void teste_email()
{
	string email;

	cout << "Insira seu e-mail: ";
	cin >> email;

	//cout << "Seu email foi valido: " << validarEmail(email);
}

void teste_senha()
{
	string senha,
		senha_confimacao;

	cout << "Digite sua senha: " << endl;
	cin >> senha;

	cout << "Confirma sua senha: " << endl;
	cin >> senha_confimacao;

	//cout << endl << "As senhas conferem: " << validarSenha(senha, senha_confimacao);
}

void teste_opcao()
{
	int opcao,
		lista_de_opcao[5] = { 1,2,3,4,5 },
		numero_de_opcoes = 5;

	cout << "Lista de opcao: " << endl;

	for (int i = 0; i < numero_de_opcoes; i++)
	{
		cout << lista_de_opcao[i] << endl;
	}

	cout << endl;

	cout << "Escolha sua opcao: ";
	cin >> opcao;

	//cout << "A opcao escolhida foi valida: " << escolherOpcaoMenu(opcao, lista_de_opcao,numero_de_opcoes);
}

void teste_divisao()
{
	int numero_um = 0,
		numero_dois = 0;

	bool validado;

	string mensagem_erro = "";

	cout << "Digite dois numeros: " << endl;
	cin >> numero_um >> numero_dois;

	validado = dividirDoisNumeros(numero_um, numero_dois,mensagem_erro);

	cout << endl << "E possivel fazer a divisao: " << validado;

	cout << endl << endl;

	if (validado)
		cout << endl << "Valor da divisao: " << numero_um / numero_dois;
}

void teste_cpf()
{
	string cpf;

	cout << "Digite seu cpf" << endl;
	getline(cin, cpf);

	//cout << endl << "O numero do cpf foi validado: " << validarNumeroCPF(cpf) << endl;
}

void teste_numero_celular()
{
	string numero,
		mensagem_erro = "";

	cout << "Digite seu numero: ";

	getline(cin, numero);

	if (validarNumeroTelefoneCelular(numero, mensagem_erro))
		cout << endl << "O numero digitado é valido " << endl;
	else
		cout << mensagem_erro;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	teste_numero_celular();

	//teste_cpf();

	//teste_divisao();

	//teste_opcao();

	//teste_senha();

	//teste_email();

	cin.get();
	cin.get();

    return 0;
}

