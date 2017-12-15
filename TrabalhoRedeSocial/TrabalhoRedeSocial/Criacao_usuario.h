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
	int idade;

	do
	{
		solicitar_idade_escrito();
		ler(idade);

		if (!validar_idade(idade))
			mensagem_menor_de_idade();

	} while (!validar_idade(idade));

	return idade;
}

string entrada_senha()
{
	string senha,
		confirmação;

	do
	{
		solicitar_senha_escrito();
		ler(senha);

		confirmacao_senha_escrito();
		ler(confirmação);

		if (!verificar_igualdade(senha, confirmação))
			mensagem_senhas_diferentes_escrito();

	} while (!verificar_igualdade(senha, confirmação));

	return senha;
}

void pedir_infomacoes_usuarios(Usuarios *usuario, int numero_usuario)
{
	/*solicitar_nome_login_escrito();
	ler(usuario[numero_usuario].nome_login);*/

	//quebra_de_linha();

	//usuario[numero_usuario].senha = entrada_senha();

	//quebra_de_linha();

	//solicitar_nome_exibicao_escrito();
	//ler(usuario[numero_usuario].nome_completo);

	//quebra_de_linha();

	//usuario[numero_usuario].idade = entrada_idade();

	solicitar_sexo_escrito();
	ler(usuario[numero_usuario].genero);
}
//
//void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
//{
//	Usuarios *array_aux;
//
//	array_aux = new Usuarios[quantidade_usuarios];
//
//	copiar_array(usuario, array_aux, quantidade_usuarios);
//
//	quantidade_usuarios += 1;
//
//	usuario = new Usuarios[quantidade_usuarios];
//
//	copiar_array(array_aux, usuario, quantidade_usuarios - 1);
//
//	pedir_infomacoes_usuarios(usuario, quantidade_usuarios - 1);
//}

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux;

	array_aux = new Usuarios[quantidade_usuarios];

	for (int indice = 0; indice < quantidade_usuarios; indice++)
		array_aux[indice] = usuario[indice];

	quantidade_usuarios += 1;

	usuario = new Usuarios[quantidade_usuarios];

	for (int indice = 0; indice < quantidade_usuarios - 1; indice++)
		usuario[indice] = array_aux[indice];

	pedir_infomacoes_usuarios(usuario, quantidade_usuarios - 1);
}

