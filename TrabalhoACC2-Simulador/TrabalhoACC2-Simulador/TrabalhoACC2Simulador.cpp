// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"

using namespace std;

int main()
{
	busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, 5, 10);

	/*
	for (int linha = 5; linha < QUANTIDADE_LINHAS_PARA_MENORES; linha++)
		for (int coluna = 8; coluna < QUANTIDADE_COLUNAS; coluna++)
			busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, linha, coluna);
	*/


	/*escreverUmDosCampos(TAMANHO_PEQUENO);
	cout << endl;

	escreverUmDosCampos(TAMANHO_MEDIO);
	cout << endl;

	escreverUmDosCampos(TAMANHO_GRANDE);
	cout << endl;*/

	system("pause");
	return 0;
}
