#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

using namespace std;

void pedir_infomacoes_usuarios(Usuarios *usuario, int numero_usuario)
{
	solicitar_nome_login();
	usuario[numero_usuario].nome_login;

	do
	{
		solicitar_senha();
		usuario[numero_usuario].senha;

		confirmacao_senha();
		usuario[numero_usuario].confirmacao_senha;

		if (!verificar_igualdade(usuario[numero_usuario].senha, usuario[numero_usuario].confirmacao_senha))
			mensagem_senhas_diferentes();

	} while (!verificar_igualdade(usuario[numero_usuario].senha, usuario[numero_usuario].confirmacao_senha));


}

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux_um;

	quantidade_usuarios += 1;

	array_aux_um = new Usuarios[quantidade_usuarios];

	//Pedir Informações do usuario

	copiar_array<Usuarios>(array_aux_um,usuario,quantidade_usuarios);
}

void controle_usuarios()
{
	Usuarios *usuario = new Usuarios[0];

	int quantidade_usuarios = 0;

	criar_novo_usuario(usuario, quantidade_usuarios);
}

