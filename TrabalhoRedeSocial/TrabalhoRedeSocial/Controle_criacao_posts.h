#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

void criar_novo_post(char *nome_usuario, Timeline *Posts, int &quantidade_posts)
{
	//ESTOU AQUI AGORA 12:30
}

void timeline_pots(Usuarios *usuario, int numero_usuario, Timeline *Posts, int &quantidade_posts)
{
	do
	{
		menu_timeline_escrito();
		quebra_de_linha();

		switch (selecionar_escolha(3))
		{
		case 1:
			break;
		case 2:
			criar_novo_post();
		default:
			break;
		}

	} while (true);
}

