#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

void timeline_pots(Usuarios *usuario, int numero_usuario, Timeline Posts)
{
	do
	{
		menu_timeline_escrito();
		quebra_de_linha();

		switch (selecionar_escolha(3)) //////////////// ESTOU AQUI ///////////////////// 12:20
		{
		case 1:
		default:
			break;
		}

	} while (true);
}

