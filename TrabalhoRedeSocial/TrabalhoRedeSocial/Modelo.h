#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
bool verificar_igualdade(T objeto_um, T objeto_dois)
{
	bool verificador = false;

	if (objeto_um == objeto_dois)
		verificador = true;

	return verificador;
}

template <typename T>
T copiar_array(T *array_primario, T *array_copiado, int tamanho)
{
	for (int indice = 0; indice < tamanho; indice++)
		array_copiado[indice] = array_primario[indice];
}

struct Usuarios
{
	string nome_login,
		nome_completo;

	char genero;

	int idade,
		senha,
		confirmacao_senha;
};
