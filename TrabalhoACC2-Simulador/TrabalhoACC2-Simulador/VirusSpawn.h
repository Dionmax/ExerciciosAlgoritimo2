#ifndef VIRUSSPAWN_H
#define VIRUSSPAWN_H

#include <time.h>

const int NADA = 0;
const int CENTRO = 0;
const int CANTO_SUPERIOR_E = 1;
const int CANTO_SUPERIOR_D = 2;
const int CANTO_INFERIOR_E = 3;
const int CANTO_INFERIOR_D = 4;

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

void chamar_busca(int quantidade_linhas_matriz, int linha, int coluna)
{
	switch (quantidade_linhas_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, linha, coluna, 1);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		busca_recursiva(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, linha, coluna, 0);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		busca_recursiva(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, linha, coluna, 0);
		break;
	default:
		break;
	}
}

void gerar_posicao_virus(int quantidade_linhas_matriz,int posicao)
{
	srand(time(NULL));

	int linha = rand() % 2,
		coluna = rand() % 2,
		linha_superior = 1,
		linha_inferior = quantidade_linhas_matriz - 3,
		linha_centro = quantidade_linhas_matriz / 2,
		coluna_esquerda = 1,
		coluna_direita = QUANTIDADE_COLUNAS - 3, 
		coluna_centro = QUANTIDADE_COLUNAS / 2;

	switch (posicao)
	{
	case CANTO_SUPERIOR_E:
		linha += linha_superior;
		coluna += coluna_esquerda;
		break;
	case CANTO_SUPERIOR_D:
		linha += linha_superior;
		coluna += coluna_direita;
		break;
	case CANTO_INFERIOR_E:
		linha += linha_inferior;
		coluna += coluna_esquerda;
		break;
	case CANTO_INFERIOR_D:
		linha += linha_inferior;
		coluna += coluna_direita;
	default:
		break;
	}

	chamar_busca(quantidade_linhas_matriz, linha, coluna);
}
#endif // !VIRUSSPAWN_H

