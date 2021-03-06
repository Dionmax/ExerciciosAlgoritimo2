// TrabalhoRedeSocial.cpp :Defines the entry point for Dionmax the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <istream>

#include "SuporteEscrita.h"
#include "Modelo.h"
#include "Criacao_usuario.h"
#include "Autenticacao_usuario.h"
#include "Controle_criacao_posts.h"

using namespace std;

void encerrar_programa(bool &programa_executando)
{
	encerramento_escrito();
	programa_executando = false;
}

void menu(Usuarios *usuario, int &quantidade_usuarios, Timeline *posts, int &quantidade_posts)
{
	bool programa_executando = true;

	apresentacao_escrito();
	menu_opcoes();

	quebra_de_linha();

	do
	{
		menu_login_criar();
		switch (selecionar_escolha(3))
		{
		case 1:
			char nome[100];
			solicitar_nome_login_escrito();
			cin.getline(nome, 100);
			if (buscar_usuario_login(usuario, quantidade_usuarios, nome) != NAO_ACHADO)
				if (fazer_login(usuario, buscar_usuario_login(usuario, quantidade_usuarios, nome)))
					timeline_pots(usuario, buscar_usuario_login(usuario, quantidade_usuarios, nome), posts, quantidade_posts);
				else;
			else
				usuario_nao_achado_escrito();
			break;
		case 2:
			*usuario = criar_novo_usuario(usuario, quantidade_usuarios);
			break;
		case 3:
			encerrar_programa(programa_executando);
		default:
			break;
		}

		//Verificação Paralela
		//cout << "Nome Login: " << usuario[quantidade_usuarios-1].nome_login << endl;
		//cout << "Senha: " << usuario[quantidade_usuarios - 1].senha << endl;

	} while (programa_executando);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Usuarios *usuario;
	Timeline *posts;

	int quantidade_posts = 0;
	int quantidade_usuarios = 0;

	usuario = new Usuarios[quantidade_usuarios];
	posts = new Timeline[quantidade_posts];

	menu(usuario, quantidade_usuarios, posts, quantidade_posts);

	cin.get();
	cin.get();
	return 0;
}
