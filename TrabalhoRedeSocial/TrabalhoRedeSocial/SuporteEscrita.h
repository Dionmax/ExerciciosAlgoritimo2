#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

using namespace std;

void escreve_informações_usuarios_escrito(Usuarios usuario[], int numero_usuario)
{
	cout << "Nome Login: " << usuario[numero_usuario].nome_login << endl;

	cout << "Nome completo: " << usuario[numero_usuario].nome_completo << endl;

	cout << "Senha: " << usuario[numero_usuario].senha << endl;

	cout << "Idade: " << usuario[numero_usuario].idade << endl;

	cout << "Genero: " << usuario[numero_usuario].genero << endl;
}

void encerramento_escrito()
{
	cout << "Programa finalizado" << endl;
}

void quebra_de_linha()
{
	cout << endl;
}

void solicitar_nome_login_escrito()
{
	cout << "Digite seu nome de usuario: " << endl;
}

void solicitar_senha_escrito()
{
	cout << "Digite sua senha: " << endl;
}

void confirmacao_senha_escrito()
{
	cout << "Digite sua senha novamente: " << endl;
}

void mensagem_senhas_diferentes_escrito()
{
	cout << "Senhas não conferem!" << endl << endl;
}

void criador_trabalho_escrito()
{
	cout << "Função disfarçada de texto: Dionmax" << endl;
}

void solicitar_nome_exibicao_escrito()
{
	cout << "Digite seu nome completo para exibição!" << endl;
}

void solicitar_idade_escrito()
{
	cout << "Digite sua idade: " << endl;
}

void mensagem_menor_de_idade()
{
	cout << "Lamentamos, mas sua idade viola os termos de uso do site" << endl;
}

void solicitar_sexo_escrito()
{
	cout << "Digite seu sexo: " << endl;
}

void apresentacao_escrito()
{
	cout << " --- Bem vindo ao CodeBook ---" << endl;
}

void menu_opcoes()
{
	cout << "Selecione uma Opção: " << endl;
}

void menu_login_criar()
{
	cout << "1 - Entrar na sua conta." << endl;
	cout << "2 - Criar novo usuario. " << endl;
	cout << "3 - Sair." << endl;
}

void mensagem_erro_escolha_escrito()
{
	cout << "Escolha inválida. " << endl;
}

void usuario_nao_achado_escrito()
{
	cout << "Usuario não encontrado!" << endl << endl;
}

void menu_timeline_escrito()
{
	cout << "1 - Ver postagens." << endl;
	cout << "2 - Criar novo post. " << endl;
	cout << "3 - Sair." << endl;
}

void escrever_postagens_escrito(Timeline *post, int quantidade_post)
{
	if (quantidade_post == 0)
		cout << "Nenhuma Postagem." << endl;
	else
		for (int indice = 0; indice < quantidade_post; indice++)
		{
			cout << "Post criado por: ";

			cout << post[indice].criador_post;

			cout << endl << endl;
			cout << post[indice].postagens << endl;

			quebra_de_linha();
		}
}
void escreva_postagem()
{
	cout << "Escreva sua Postagem: " << endl;
}


//if (typeid(x).name() == typeid(int).name())
//cout << "INT";
// cout << "" << endl;


