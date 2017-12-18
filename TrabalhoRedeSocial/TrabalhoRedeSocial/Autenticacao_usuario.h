#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"
#include "Criacao_usuario.h"
#include "SuporteEscrita.h"

using namespace std;

const int NAO_ACHADO = -2;

int buscar_usuario_login(Usuarios *usuario, int tamanho, char *nome_usuario)
{
	int posicao = NAO_ACHADO;

	for (int indice = 0; indice < tamanho; indice++)
		if (verificar_igualdade(usuario[indice].nome_login, nome_usuario, total_array_preechido_char(nome_usuario)))
			posicao = indice;

	return posicao;
}

bool fazer_login(Usuarios *usuario, int numero_usuario)
{
	char *senha = new char[100];

	solicitar_senha_escrito();
	cin.getline(senha, 100);

	if (!verificar_igualdade(usuario[numero_usuario].senha, senha, total_array_preechido_char(senha)))
		mensagem_senhas_diferentes_escrito();

	return verificar_igualdade(usuario[numero_usuario].senha, senha, total_array_preechido_char(senha));
}

