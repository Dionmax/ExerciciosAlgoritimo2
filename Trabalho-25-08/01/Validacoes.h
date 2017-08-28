#ifndef VALIDACAO_H
#define VALIDACAO_H

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

bool validarNumeroTelefoneCelular(string telefone);

bool validarNumeroCPF(string cpf);

bool dividirDoisNumeros(int numero1, int numero2);

bool escolherOpcaoMenu(int opcao, int *opcoes_validas, int numero_de_opcoes);

bool validarSenha(string campoSenha, string campoConfirmaSenha);

bool validarEmail(string email);

bool validarNumeroTelefoneCelular(string telefone)
{
	int tamanho_string = telefone.size(),
		contador_posicao_numero = 0,
		tamanho_numero = 10,
		tamanho_maximo_string = 14,
		numeros_na_string = 0;

	char numero_telefone[10];

	if (tamanho_string >= tamanho_maximo_string)
	{
		cout << "ERRO!" << endl;
		cout << "Quantidade de digitos excedidos.";
		cout << "Exemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

		return false;
	}

	for (size_t indice = 0; indice < tamanho_string; indice++)
	{
		if (telefone[indice] >= '0' && telefone[indice] <= '9')
			numeros_na_string++;

		if (numeros_na_string > tamanho_numero)
		{
			cout << "ERRO!" << endl;
			cout << "Quantidade de numeros excedidos." << endl;
			cout << "Tamanho maximo: " << tamanho_numero;

			return false;
		}
	}

	for (size_t indice = 0; indice < tamanho_string; indice++)
	{
		if (telefone[indice] >= '0' && telefone[indice] <= '9')
		{
			numero_telefone[contador_posicao_numero] = telefone[indice];
			contador_posicao_numero++;
		}
	}

	if (contador_posicao_numero != tamanho_numero)
	{
		cout << "ERRO!" << endl;
		cout << "Tamanho do numero inválido." << endl;
		cout << "Falta " << tamanho_numero - contador_posicao_numero << " numero(s).";
		cout << "Exemplos: (47)9912-3456 / 4799123456 / 47 9912-3456";

		return  false;
	}

	if (numero_telefone[0] != '4' && numero_telefone[0] != '7')
	{
		cout << "Codigo DDD inválido" << endl;
		cout << "Area de cobertura permitida: (47)";

		return  false;
	}

	return true;
}

bool validarNumeroCPF(string cpf)
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

	for (size_t indice = 0; indice < tamanho_string; indice++)
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

	for (size_t indice = 0; indice < tamanho_string; indice++)
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

bool dividirDoisNumeros(int numero1, int numero2)
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

bool escolherOpcaoMenu(int opcao, int *opcoes_validas, int numero_de_opcoes)
{
	for (size_t i = 0; i < numero_de_opcoes; i++)
	{
		if (opcao == opcoes_validas[i])
		{
			return true;
		}
	}
	
	cout << "Opcao invalida!" << endl;
	cout << "Segue abaixo a lista de opcoes validas" << endl;

	for (size_t i = 0; i < numero_de_opcoes; i++)
	{
		cout << opcoes_validas[i] << endl;
	}

	cout << endl;

	return false;
}

bool validarSenha(string campoSenha, string campoConfirmaSenha)
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

bool validarEmail(string email)
{
	int tamanho_email = email.size(),
		casa_antes = 0,
		casas_depois = 0;

	bool email_validado = false;

	for (size_t indice = 0; indice < tamanho_email; indice++)
	{
		if (email[indice] == '@')
		{
			for (size_t contador = indice; contador < tamanho_email; contador++)
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

	return email_validado;
}

#endif // !VALIDACAO_H

