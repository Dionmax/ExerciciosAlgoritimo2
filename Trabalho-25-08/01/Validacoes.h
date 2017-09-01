#ifndef VALIDACAO_H
#define VALIDACAO_H

#include "stdafx.h"
#include "iostream"
#include "string"

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
		numeros_faltando_texto = numeros_faltando;

		mensagem_erro = "ERRO!\nTamanho do numero inválido.\nFalta ",numeros_faltando," numero(s).\nExemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

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
		numeros_na_string = 0;

	char numero_cpf[11];

	if (tamanho_string > tamanho_maximo_string)
	{
		cout << "Tamanho maximo de digitos excedido!" << endl;
		cout << "Exemplo: '123-456-789-00' / '12345678900'";

		return false;
	}

	for (int indice = 0; indice < tamanho_string; indice++)
	{
		if (cpf[indice] >= '0' && cpf[indice] <= '9')
			numeros_na_string++;

		if (numeros_na_string > tamanho_cpf)
		{
			cout << "ERRO!" << endl;
			cout << "Quantidade de numeros excedidos." << endl;
			cout << "Tamanho maximo: " << tamanho_cpf;

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
		cout << "Quantidade de digitos invalida!" << endl;
		cout << "Faltou " << tamanho_cpf - contador_posicao_numero << " digito(s)";
		
		return false;
	}

	return true;
}

bool dividirDoisNumeros(int numero1, int numero2, string &mensagem_erro)
{
	if (numero2 == 0)
	{
		cout << "Não possivel fazer divisão por Zero (0).";

		return false;
	}

	if (numero1 % 2 != 0 || numero2 % 2 != 0)
		cout << "Possivel alteracao no valor final na conta. " << endl << "Exception: Numero real.";


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
	
	cout << "Opcao invalida!" << endl;
	cout << "Segue abaixo a lista de opcoes validas" << endl;

	for (int i = 0; i < numero_de_opcoes; i++)
	{
		cout << opcoes_validas[i] << endl;
	}

	cout << endl;

	return false;
}

bool validarSenha(string campoSenha, string campoConfirmaSenha, string &mensagem_erro)
{
	int tamanho_senha = campoSenha.size(),
		tamanho_minimo_senha = 8;

	if (tamanho_senha < tamanho_minimo_senha)
	{
		cout << "Numero de caracters insuficientes!" <<endl;
		return false;
	}

	if (campoSenha == campoConfirmaSenha)
		return true;
	else
	{
		cout << "Senhas não conferem!";
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
		cout << "Tamanho do email invalido!" << endl;
		return false;
	}

	if (casas_depois > tamanho_minimo_parte_antes)
	{
		cout << "Tamanho do email invalido!" << endl;
		return false;
	}

	return email_validado;
}

#endif // !VALIDACAO_H

