#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <typeinfo.h>

#include"SuporteEscrita.h"

using namespace std;

const int TAMANHO_POSTAGEM = 280;

//const int TAMANHO_INFORMACAO = 100;

struct Timeline
{
	string criador_post;

	char postagens[TAMANHO_POSTAGEM];
};

struct Usuarios
{
	char nome_login[100] = {'*'},
		nome_completo[100],
		senha[100];

	char genero;

	int idade = 0;
};

template <typename T>
bool verificar_igualdade(T *objeto_um, T *objeto_dois)
{
	bool verificador = true;

	for (int indice = 0; indice < 100 && verificador == true; indice++)
		if (objeto_um[indice] != objeto_dois[indice])
			verificador = false;

	return verificador;
}

template <typename T>
void copiar_array(T *array_origem, T *array_destino, int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		array_origem[indice] = array_destino[indice];
}

int selecionar_escolha(int numero_escolhas)
{
	int escolha = 0;

	bool verificacao = true;

	do
	{
		cin >> escolha;
		cin.get();

		if (escolha > 0 && escolha <= numero_escolhas)
			verificacao = false;
		//else
			//mensagem_erro_escolha_escrito();

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

//void convert_string_to_char(char *objeto, string palavra, int tamanho)
//{
//	for (int indice = 0; indice < tamanho; indice++)
//		objeto[indice] = palavra[indice];
//
//	cout << "2 = " << objeto << endl;
//	cout << "2 t = " << strlen(objeto) << endl;
//}
//
//void ler_string_to_char(char *objeto)
//{
//	string objeto_texto;
//
//	getline(cin, objeto_texto);
//
//	objeto = new char[objeto_texto.length() + 1];
//
//	/*cout << "1 = " << objeto << endl;*/
//	//cout << "1 t = " << objeto_texto.length() << endl;
//
//	//convert_string_to_char(objeto, objeto_texto, objeto_texto.length());
//
//	//strcpy(objeto, objeto_texto.c_str());
//}


