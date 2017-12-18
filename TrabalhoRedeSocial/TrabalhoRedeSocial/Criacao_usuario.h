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

void entrada_idade(int &idade)
{
	do
	{
		solicitar_idade_escrito();
		cin >> idade;

		if (!validar_idade(idade))
			mensagem_menor_de_idade();

	} while (!validar_idade(idade));

	//return idade;
}

void entrada_senha(char *senha_nova)
{
	char *confirmacao = new char[100];

	do
	{
		solicitar_senha_escrito();
		cin.getline(senha_nova, 100);

		confirmacao_senha_escrito();
		cin.getline(confirmacao, 100);

		if (!verificar_igualdade(senha_nova, confirmacao, total_array_preechido_char(senha_nova)))
			mensagem_senhas_diferentes_escrito();

	} while (!verificar_igualdade(senha_nova, confirmacao, total_array_preechido_char(senha_nova)));
}

void pedir_infomacoes_usuarios(Usuarios *usuario, int numero_usuario)
{
	solicitar_nome_login_escrito();
	cin.getline(usuario[numero_usuario].nome_login, 100);

	quebra_de_linha();

	entrada_senha(usuario[numero_usuario].senha);

	quebra_de_linha();

	solicitar_nome_exibicao_escrito();
	cin.getline(usuario[numero_usuario].nome_completo, 100);

	quebra_de_linha();

	entrada_idade(usuario[numero_usuario].idade);

	solicitar_sexo_escrito();
	cin >> usuario[numero_usuario].genero;
}

Usuarios criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux;

	array_aux = new Usuarios[quantidade_usuarios];

	copiar_array(usuario, array_aux, quantidade_usuarios);

	quantidade_usuarios += 1;

	usuario = new Usuarios[quantidade_usuarios];

	copiar_array(array_aux, usuario, quantidade_usuarios - 1);

	//usuario = (Usuarios*)realloc(usuario, quantidade_usuarios*sizeof(int));

	pedir_infomacoes_usuarios(usuario, quantidade_usuarios - 1);

	return usuario[quantidade_usuarios - 1];
}

