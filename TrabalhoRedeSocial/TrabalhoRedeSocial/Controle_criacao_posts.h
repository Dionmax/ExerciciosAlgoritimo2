#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

void escrever_novo_post(char *post)
{
	escreva_postagem();
	cin.getline(post, TAMANHO_POSTAGEM);
}

bool checar_usuario_marcado(char * postagem)
{
	bool achou = false;

	for (int indice = 0; indice < total_array_preechido_char(postagem); indice++)
		if (postagem[indice] == '@')
			achou = true;

	return achou;
}

Timeline criar_novo_post(char *nome_usuario, Timeline *posts, int &quantidade_posts)
{
	Timeline *array_aux = new Timeline[quantidade_posts];

	copiar_array(posts, array_aux, quantidade_posts);

	quantidade_posts += 1;

	posts = new Timeline[quantidade_posts];

	copiar_array(array_aux, posts, quantidade_posts - 1);

	escrever_novo_post(posts[quantidade_posts - 1].postagens);

	if (checar_usuario_marcado(posts[quantidade_posts - 1].postagens))
		cout << "Teste @@ Find" << endl; // Pareiiii aquiiiii ////

	posts[quantidade_posts - 1].criador_post = new char[total_array_preechido_char(nome_usuario)+1];

	//copiar_array(nome_usuario, posts[quantidade_posts - 1].criador_post, total_array_preechido_char(nome_usuario));

	posts[quantidade_posts - 1].criador_post = nome_usuario;

	return posts[quantidade_posts - 1];
}

void timeline_pots(Usuarios *usuario, int numero_usuario, Timeline *posts, int &quantidade_posts)
{
	do
	{
		menu_timeline_escrito();
		quebra_de_linha();

		switch (selecionar_escolha(3))
		{
		case 1:
			escrever_postagens_escrito(posts, quantidade_posts);
			break;
		case 2:
			posts[quantidade_posts - 1] = criar_novo_post(usuario[numero_usuario].nome_completo, posts, quantidade_posts);
			break;
		case 3:
			return;
		default:
			break;
		}

	} while (true);
}

