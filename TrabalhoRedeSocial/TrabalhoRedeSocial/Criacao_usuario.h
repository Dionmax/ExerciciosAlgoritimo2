#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

using namespace std;

void criar_novo_usuario(Usuarios *usuario, int &quantidade_usuarios)
{
	Usuarios *array_aux_um,
		*array_aux_dois;
}

void controle_usuarios()
{
	Usuarios *usuario = new Usuarios[0];

	int quantidade_usuarios = 0;

	criar_novo_usuario(usuario, quantidade_usuarios);
}

