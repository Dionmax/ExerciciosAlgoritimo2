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
	string email, mensagem_erro = "";

	cout << "Insira seu e-mail: ";
	cin >> email;

	if (validarEmail(email, mensagem_erro))
		cout << "Seu email foi valido!";
	else
		cout << mensagem_erro;
}

void teste_senha()
{
	string senha,
		senha_confimacao,
		mensagem_erro = "";

	cout << "Digite sua senha: " << endl;
	cin >> senha;

	cout << "Confirma sua senha: " << endl;
	cin >> senha_confimacao;

	if (validarSenha(senha, senha_confimacao, mensagem_erro))
		cout << endl << "As senhas conferem!";
	else
		cout << mensagem_erro;
}

void teste_opcao()
{
	int opcao,
		lista_de_opcao[5] = { 1,2,3,4,5 },
		numero_de_opcoes = 5;

	string mensagem_erro = "";

	cout << "Lista de opcao: " << endl;

	for (int i = 0; i < numero_de_opcoes; i++)
	{
		cout << lista_de_opcao[i] << endl;
	}

	cout << endl;

	cout << "Escolha sua opcao: ";
	cin >> opcao;

	if (escolherOpcaoMenu(opcao, lista_de_opcao, numero_de_opcoes, mensagem_erro))
		cout << "A opcao escolhida foi valida: " << endl;
	else
		cout << mensagem_erro;
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

	cout << endl << endl;

	if (validado)
	{
		cout << endl << "E possivel fazer a divisao!" << endl;
		cout << "Valor da divisao: " << numero_um / numero_dois;
	}
	else
		cout << mensagem_erro;
}

void teste_cpf()
{
	string cpf, mensagem_erro = "";

	cout << "Digite seu cpf: " << endl;
	getline(cin, cpf);

	if (validarNumeroCPF(cpf, mensagem_erro))
		cout << endl << "O numero do cpf foi validado!" << endl;
	else
		cout << mensagem_erro;
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

	//teste_numero_celular();

	teste_cpf();

	//teste_divisao();

	//teste_opcao();

	//teste_senha();

	//teste_email();

	cin.get();
	cin.get();

    return 0;
}

