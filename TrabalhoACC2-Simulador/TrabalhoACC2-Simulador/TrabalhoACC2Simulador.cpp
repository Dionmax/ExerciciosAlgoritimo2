// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"
#include "suporte_escrita.h"

using namespace std;

void escolhas_menu()
{

}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu_de_propagacao_virus();

	//busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, 5, 8, TAMANHO_PEQUENO);
	//busca_recursiva(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, 5, 5, TAMANHO_MEDIO);
	//busca_recursiva(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, 5, 8, TAMANHO_GRANDE);

	cout << endl;
	system("pause");
	return 0;
}
