// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"
#include "CercaSpawn.h"
#include "suporte_escrita.h"

using namespace std;

void teste_proliferacao_pequeno()
{
	posicionar_cercas(QUANTIDADE_LINHAS_PARA_MENORES);

	escreverUmDosCampos(TAMANHO_PEQUENO);

	gerar_posicao_virus(QUANTIDADE_LINHAS_PARA_MENORES, CANTO_SUPERIOR_E);

	escreverUmDosCampos(TAMANHO_PEQUENO);
}
void teste_proliferacao_medio()
{
	posicionar_cercas(QUANTIDADE_LINHAS_PARA_MEDIOS);

	escreverUmDosCampos(TAMANHO_MEDIO);

	gerar_posicao_virus(QUANTIDADE_LINHAS_PARA_MEDIOS, CANTO_SUPERIOR_E);

	escreverUmDosCampos(TAMANHO_MEDIO);
}

void teste_proliferacao_grande()
{
	posicionar_cercas(QUANTIDADE_LINHAS_PARA_GRANDES);

	escreverUmDosCampos(TAMANHO_GRANDE);

	gerar_posicao_virus(QUANTIDADE_LINHAS_PARA_GRANDES, CANTO_SUPERIOR_E);

	escreverUmDosCampos(TAMANHO_GRANDE);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu_central();

	
	//teste_proliferacao_pequeno();
	//teste_proliferacao_medio();
	//teste_proliferacao_grande();

	cout << endl;

	system("pause");

	return 0;
}
