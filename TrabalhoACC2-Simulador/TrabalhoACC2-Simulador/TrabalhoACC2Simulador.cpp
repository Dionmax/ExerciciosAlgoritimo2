// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"
#include "suporte_escrita.h"
#include "CercaSpawn.h"

using namespace std;

void escolhas_menu()
{

}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//menu_central();

	centro(QUANTIDADE_LINHAS_PARA_MEDIOS);
	canto_superior_esquerdo(QUANTIDADE_LINHAS_PARA_MEDIOS);
	canto_superior_direito(QUANTIDADE_LINHAS_PARA_MEDIOS);
	canto_inferior_esquerdo(QUANTIDADE_LINHAS_PARA_MEDIOS);
	canto_inferior_direito(QUANTIDADE_LINHAS_PARA_MEDIOS);



	escreverUmDosCampos(TAMANHO_MEDIO);

	cout << endl;

	system("pause");

	return 0;
}
