#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void escrever(T algo)
{
	cout << algo << endl;
}

void encerramento_escrito()
{
	cout << "Programa finalizado" << endl;
}

void quebra_de_linha()
{
	cout << endl;
}

void solicitar_nome_login_escrito()
{
	cout << "Digite seu nome de usuario: " << endl;
}

void solicitar_senha_escrito()
{
	cout << "Digite sua senha: " << endl;
}

void confirmacao_senha_escrito()
{
	cout << "Digite sua senha novamente: " << endl;
}

void mensagem_senhas_diferentes_escrito()
{
	cout << "Senhas não conferem!" << endl << endl;
}

void criador_trabalho_escrito()
{
	cout << "Função disfarçada de texto: Dionmax" << endl;
}

void solicitar_nome_exibicao_escrito()
{
	cout << "Digite seu nome completo para exibição!" << endl;
}

void solicitar_idade_escrito()
{
	cout << "Digite sua idade: " << endl;
}

void mensagem_menor_de_idade()
{
	cout << "Lamentamos, mas sua idade viola os termos de uso do site" << endl;
}

void solicitar_sexo_escrito()
{
	cout << "Digite seu sexo: " << endl;
}

void apresentacao_escrito()
{
	cout << " --- Bem vindo ao CodeBook ---" << endl;
}

void menu_opcoes()
{
	cout << "Selecione uma Opção: " << endl;
}

void menu_login_criar()
{
	cout << "1 - Entrar na sua conta." << endl;
	cout << "2 - Criar novo usuario. " << endl;
	cout << "3 - Sair." << endl;
}

void mensagem_erro_escolha_escrito()
{
	cout << "Escolha inválida. " << endl;
}

//if (typeid(x).name() == typeid(int).name())
//cout << "INT";
// cout << "" << endl;

//void teste()
//{
//	char *nome = new char[0];
//
//	ler_string_to_char(nome);
//
//	cout << "3 = " << nome << endl;
//	cout << "3 Tamanho: " << strlen(nome);
//}
//
//void teste1(char *nome_zu)
//{
//	string nome;
//
//	getline(cin, nome);
//
//	nome_zu = new char[size(nome) + 1];
//
//	memcpy(nome_zu, nome.c_str(), size(nome) + 1);
//
//	cout << endl << "Saida: " << nome_zu;
//	cout << endl << "Saida T: " << strlen(nome_zu);
//	cout << endl << "Tamanho: " << size(nome);
//}
//




