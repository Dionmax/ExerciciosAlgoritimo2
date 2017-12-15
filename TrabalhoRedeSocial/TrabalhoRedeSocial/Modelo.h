#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <typeinfo.h>

using namespace std;

const int TAMANHO_POSTAGEM = 280;

struct Timeline
{
	string criador_post;

	char postagens[TAMANHO_POSTAGEM];
};

struct Usuarios
{
	string nome_login = " ",
		nome_completo = " ",
		senha = " ";

	char genero = ' ';

	int idade = 0;
};

template <typename T>
bool verificar_igualdade(T objeto_um, T objeto_dois)
{
	bool verificador = false;

	if (objeto_um == objeto_dois)
		verificador = true;

	return verificador;
}

template <typename T>
void copiar_array(T *array_primario, T *array_copiado, int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		array_copiado[indice] = array_primario[indice];
}

template <typename T>
T ler(T &objeto)
{
	cin >> objeto;

	return objeto;
}

template <typename T>
T ler_texto(T &objeto)
{
	cin.getline();

	return objeto;
}

int selecionar_escolha(int numero_escolhas)
{
	int escolha = 0;

	bool verificacao = true;

	do
	{
		cin >> escolha;

		if (escolha > 0 && escolha <= numero_escolhas)
			verificacao = false;
		else
			mensagem_erro_escolha_escrito();

	} while (verificacao);

	return escolha;
}


//template <typename T>
//bool confimar_tipo(T objeto, char _const_tipo)
//{
//	bool verificacao = false;
//
//	switch (_const_tipo)
//	{
//	case 'i':
//		if (typeid(objeto).name() == typeid(int).name())
//			verificacao = true;
//		break;
//
//	case 'c':
//		if (typeid(objeto).name() == typeid(char).name())
//			verificacao = true;
//		break;
//
//	case 's':
//		if (typeid(objeto).name() == typeid(string).name())
//			verificacao = true;
//		break;
//	default:
//		break;
//	}
//
//	return verificacao;
//}

