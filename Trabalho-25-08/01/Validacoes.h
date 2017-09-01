#ifndef VALIDACAO_H
#define VALIDACAO_H

#include "stdafx.h"
#include "iostream"
#include "string"
#include <sstream>

using namespace std;

bool validarNumeroTelefoneCelular(string telefone, string &mensagem_erro)
{
	int tamanho_string = telefone.size(),
		contador_posicao_numero = 0,
		tamanho_numero = 10,
		tamanho_maximo_string = 14,
		numeros_na_string = 0,
		numeros_faltando = 0;

	char numero_telefone[10];

	string numeros_faltando_texto = "";

	if (tamanho_string >= tamanho_maximo_string)
	{
		mensagem_erro = "ERRO!\nQuantidade de digitos excedidos.\nExemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

		return false;
	}

	for (int indice = 0; indice < tamanho_string; indice++)
	{
		if (telefone[indice] >= '0' && telefone[indice] <= '9')
			numeros_na_string++;

		if (numeros_na_string > tamanho_numero)
		{
			mensagem_erro = "ERRO!\nQuantidade de numeros excedidos.\nExemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

			return false;
		}
	}

	for (int indice = 0; indice < tamanho_string; indice++)
	{
		if (telefone[indice] >= '0' && telefone[indice] <= '9')
		{
			numero_telefone[contador_posicao_numero] = telefone[indice];
			contador_posicao_numero++;
		}
	}

	if (contador_posicao_numero != tamanho_numero)
	{
		numeros_faltando = tamanho_numero - contador_posicao_numero;

		stringstream conversor_aux;
		conversor_aux << numeros_faltando;

		numeros_faltando_texto += conversor_aux.str();

		mensagem_erro = "ERRO!\nTamanho do numero inválido.\nFalta "+numeros_faltando_texto+" numero(s).\nExemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

		return  false;
	}

	if (numero_telefone[0] != '4' && numero_telefone[0] != '7')
	{
		mensagem_erro = "Codigo DDD inválido\nArea de cobertura permitida: (47)";

		return  false;
	}

	return true;
}

bool validarNumeroCPF(string cpf, string &mensagem_erro)
{
	int tamanho_string = cpf.size(),
		tamanho_maximo_string = 14,
		contador_posicao_numero = 0,
		tamanho_cpf = 11,
		numeros_na_string = 0,
		tamanho_cpf_faltando = 0;

	char numero_cpf[11];

	string tamanho_cpf_faltando_texto = "";

	if (tamanho_string > tamanho_maximo_string)
	{
		mensagem_erro = "Tamanho maximo de digitos excedido!\nExemplo: '123-456-789-00' / '12345678900'";

		return false;
	}

	for (int indice = 0; indice < tamanho_string; indice++)
	{
		if (cpf[indice] >= '0' && cpf[indice] <= '9')
			numeros_na_string++;

		if (numeros_na_string > tamanho_cpf)
		{
			mensagem_erro = "ERRO!\nQuantidade de numeros excedidos.\nTamanho maximo: 14";

			return false;
		}
	}

	for (int indice = 0; indice < tamanho_string; indice++)
	{
		if (cpf[indice] >= '0' && cpf[indice] <= '9')
		{
			numero_cpf[contador_posicao_numero] = cpf[indice];
			contador_posicao_numero++;
		}
	}

	if (contador_posicao_numero != tamanho_cpf)
	{
		tamanho_cpf_faltando = tamanho_cpf - contador_posicao_numero;

		stringstream conversor_aux;
		conversor_aux << tamanho_cpf_faltando;

		tamanho_cpf_faltando_texto += conversor_aux.str();

		mensagem_erro = "Quantidade de digitos invalida!\nFaltou "+tamanho_cpf_faltando_texto+" digito(s)";
		
		return false;
	}

	return true;
}

bool dividirDoisNumeros(int numero1, int numero2, string &mensagem_erro)
{
	if (numero2 == 0)
	{
		mensagem_erro ="Não possivel fazer divisão por Zero (0).";

		return false;
	}

	return true;
}

bool escolherOpcaoMenu(int opcao, int *opcoes_validas, int numero_de_opcoes, string &mensagem_erro)
{
	for (int i = 0; i < numero_de_opcoes; i++)
	{
		if (opcao == opcoes_validas[i])
		{
			return true;
		}
	}
	
	mensagem_erro = "Opcao invalida!";

	return false;
}

bool validarSenha(string campoSenha, string campoConfirmaSenha, string &mensagem_erro)
{
	int tamanho_senha = campoSenha.size(),
		tamanho_minimo_senha = 8;

	if (tamanho_senha < tamanho_minimo_senha)
	{
		mensagem_erro = "Numero de caracters insuficientes!";
		return false;
	}

	if (campoSenha == campoConfirmaSenha)
		return true;
	else
	{
		mensagem_erro = "Senhas não conferem!";
		return false;
	}

	return false;
}

bool validarEmail(string email, string &mensagem_erro)
{
	int tamanho_email = email.size(),
		casa_antes = 0,
		casas_depois = 0,
		tamanho_minimo_parte_antes = 4;

	bool email_validado = false;

	for (int indice = 0; indice < tamanho_email; indice++)
	{
		if (email[indice] == '@')
		{
			for (int contador = indice; contador < tamanho_email; contador++)
			{
				casas_depois++;

				if (email[contador] == '.')
				{
					email_validado = true; 
				}
			}
		}

		casa_antes++;
	}

	if (casa_antes > tamanho_minimo_parte_antes)
	{
		mensagem_erro = "Tamanho do email invalido!";
		return false;
	}

	if (casas_depois > tamanho_minimo_parte_antes)
	{
		mensagem_erro = "Tamanho do email invalido!";
		return false;
	}

	return email_validado;
}

#endif // !VALIDACAO_H

