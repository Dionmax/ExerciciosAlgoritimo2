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

void quebra_de_linha()
{
	cout << endl;
}

void solicitar_nome_login()
{
	cout << "Digite seu nome de usuario: " << endl;
}

void solicitar_senha()
{
	cout << "Digite sua senha: " << endl;
}

void confirmacao_senha()
{
	cout << "Digite sua senha novamente: " << endl;
}

void mensagem_senhas_diferentes()
{
	cout << "Senhas não conferem!" << endl;
}

void solicitar_nome_exibicao()
{
	cout << "Digite seu nome completo para exibição!" << endl;
}

void solicitar_idade()
{
	cout << "Digite sua idade: " << endl;
}

void solicitar_sexo()
{
	cout << "Digite seu sexo: " << endl;
}



