#pragma once

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

struct Usuarios
{
	string nome_login,
		nome_completo;

	char genero;

	int idade,
		senha,
		confirmacao_senha;
};
