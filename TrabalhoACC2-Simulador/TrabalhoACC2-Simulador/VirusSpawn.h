#ifndef VIRUSSPAWN_H
#define VIRUSSPAWN_H

#include <time.h>

const int NADA = 0;
const int UM = 1;
const int MENOS_UM = -1;

bool verificar_casa(char campo[][QUANTIDADE_COLUNAS], int tamnho_matriz, int linha, int coluna)
{
	bool livre = false;

	if (campo[linha][coluna] == VAZIO)
		livre = true;

	return livre;
}

int busca_recursiva(char campo[][QUANTIDADE_COLUNAS], int tamanho_matriz, int linha, int coluna,int tamanho_escrita)
{
	if (verificar_casa(campo, tamanho_matriz, linha, coluna))
	{
		campo[linha][coluna] = VIRUS;
		escreverUmDosCampos(tamanho_escrita);
	}
	else
		return NADA;

	for (int linha_dois = -1; linha_dois < 2; linha_dois++)
		for (int coluna_dois = -1; coluna_dois < 2; coluna_dois++)
			 busca_recursiva(campo, tamanho_matriz, linha + linha_dois, coluna + coluna_dois,tamanho_escrita);

	return NADA;
}

void gerar_virus(int tamanho, int escrever)
{
	srand(time(NULL));

	int linha = rand()%4,
		coluna = rand()%4;




	busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, linha, coluna, TAMANHO_PEQUENO);
	busca_recursiva(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, linha, coluna, TAMANHO_MEDIO);
	busca_recursiva(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, linha, coluna, TAMANHO_GRANDE);
}


#endif // !VIRUSSPAWN_H

