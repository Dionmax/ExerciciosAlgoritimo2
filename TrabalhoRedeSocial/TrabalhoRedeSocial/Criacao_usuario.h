#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

using namespace std;

void teste_nome(Usuarios *usuario, int quantidade_usuarios)
{
	for (int i = 0; i < quantidade_usuarios; i++)
	{
		cout << usuario[quantidade_usuarios].nome_login;
	}
}

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	quantidade_usuarios++;

	usuario = new Usuarios[quantidade_usuarios];

	solicitar_nome_login();

	cin >> usuario[quantidade_usuarios - 1].nome_login;

	teste_nome(usuario, quantidade_usuarios);
}

void controle_usuarios()
{
	Usuarios *usuario;

	int quantidade_usuarios = 0;

	usuario = new Usuarios[quantidade_usuarios];

	criar_novo_usuario(usuario, quantidade_usuarios);
}

