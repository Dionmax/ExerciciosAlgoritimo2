#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

const int IDADE_MINIMA = 18;

using namespace std;

bool validar_idade(int idade)
{
	bool verificador = false;

	if (idade >= IDADE_MINIMA)
		verificador = true;

	return verificador;
}

int entrada_idade()
{
	int idade = 0;

	do
	{
		solicitar_idade_escrito();
		cin >> idade;

		if (!validar_idade(idade))
			mensagem_menor_de_idade();

	} while (!validar_idade(idade));

	return idade;
}

int entrada_senha()
{
	int senha = 0,
		confirmação = 0;

	do
	{
		solicitar_senha_escrito();
		cin >> senha;

		confirmacao_senha_escrito();
		cin >> confirmação;

		if (!verificar_igualdade(senha, confirmação))
			mensagem_senhas_diferentes_escrito();

	} while (!verificar_igualdade(senha, confirmação));

	return senha;
}

void pedir_infomacoes_usuarios(Usuarios *usuario, int numero_usuario)
{
	solicitar_nome_login_escrito();
	cin >> usuario[numero_usuario].nome_login;

	quebra_de_linha();

	usuario[numero_usuario].senha = entrada_senha();

	quebra_de_linha();

	solicitar_nome_exibicao_escrito();
	cin >> usuario[numero_usuario].nome_completo;

	// idade

	solicitar_sexo_escrito();
	cin >> usuario[numero_usuario].genero;
}

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux_um;

	quantidade_usuarios += 1;

	array_aux_um = new Usuarios[quantidade_usuarios];

	//Pedir Informações do usuario

	copiar_array(array_aux_um, usuario, quantidade_usuarios);
}

void controle_usuarios()
{
	Usuarios *usuario = new Usuarios[0];

	int quantidade_usuarios = 0;

	criar_novo_usuario(usuario, quantidade_usuarios);
}

