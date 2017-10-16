#ifndef CERCA_SPAWN_H
#define CERCA_SPAWN_H

/*
-> Quantidade de cercas pequeno = 0;
-> Quantidade de vazio pequeno = 144;

-> Quantidade de cercas medio = 47;
-> Quantidade de vazio medio = 187;

-> Quantidade de cercas grande = 88;
-> Quantidade de vazio grande = 326;
*/

const char BARREIRA = '@';
const int QUANTIDADE_CERCAS_P = 20;
const int QUANTIDADE_CERCAS_G = 25;

int gerar_cercas(char campo[][QUANTIDADE_COLUNAS], int tamanho_matriz, int comeco_linha, int comeco_coluna, int limite_linha, int limite_coluna,int cercas)
{
	int colocar_cerca;

	if (cercas == 0)
		return NADA;

	for (int linha = comeco_linha; linha < limite_linha; linha++)
		for (int coluna = comeco_coluna; coluna < limite_coluna; coluna++)
		{
			colocar_cerca = rand() % 5;

			if (colocar_cerca == 1 && verificar_casa(campo, tamanho_matriz, linha, coluna))
			{
				campo[linha][coluna] = BARREIRA;
				gerar_cercas(campo, tamanho_matriz, linha, coluna, limite_linha, limite_coluna, cercas - 1);
			}
		}
			
}

void centro(int tamanho_matriz)
{
	int
		comeco_linha = tamanho_matriz / 2 - 2,
		limite_linha = tamanho_matriz / 2 + 1,
		comeco_coluna = QUANTIDADE_COLUNAS / 2 - 2,
		limite_coluna = QUANTIDADE_COLUNAS / 2 + 1;

	switch (tamanho_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		gerar_cercas(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_P);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		gerar_cercas(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		gerar_cercas(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
	default:
		break;
	}
}

void canto_superior_esquerdo(int tamanho_matriz)
{
	int
		comeco_linha = 1,
		limite_linha =  4,
		comeco_coluna = 1,
		limite_coluna = 4;

	switch (tamanho_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		gerar_cercas(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_P);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		gerar_cercas(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		gerar_cercas(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
	default:
		break;
	}
}

void canto_superior_direito(int tamanho_matriz)
{
	int
		comeco_linha = 1,
		limite_linha = 4,
		comeco_coluna = QUANTIDADE_COLUNAS - 4, 
		limite_coluna = QUANTIDADE_COLUNAS - 1;

	switch (tamanho_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		gerar_cercas(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_P);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		gerar_cercas(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		gerar_cercas(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
	default:
		break;
	}
}

void canto_inferior_esquerdo(int tamanho_matriz)
{
	int
		comeco_linha = tamanho_matriz - 4,
		limite_linha = tamanho_matriz - 1,
		comeco_coluna = 1,
		limite_coluna = 4;

	switch (tamanho_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		gerar_cercas(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_P);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		gerar_cercas(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		gerar_cercas(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
	default:
		break;
	}
}
void canto_inferior_direito(int tamanho_matriz)
{
	int
		comeco_linha = tamanho_matriz - 4,
		limite_linha = tamanho_matriz - 1,
		comeco_coluna = QUANTIDADE_COLUNAS - 4,
		limite_coluna = QUANTIDADE_COLUNAS - 1;

	switch (tamanho_matriz)
	{
	case QUANTIDADE_LINHAS_PARA_MENORES:
		gerar_cercas(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_P);
		break;
	case QUANTIDADE_LINHAS_PARA_MEDIOS:
		gerar_cercas(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
		break;
	case QUANTIDADE_LINHAS_PARA_GRANDES:
		gerar_cercas(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, comeco_linha, comeco_coluna, limite_linha, limite_coluna, QUANTIDADE_CERCAS_G);
	default:
		break;
	}
}
void posicionar_cercas(int tamanho_matriz)
{
	centro(tamanho_matriz);
	canto_superior_esquerdo(tamanho_matriz);
	canto_superior_direito(tamanho_matriz);
	canto_inferior_esquerdo(tamanho_matriz);
	canto_inferior_direito(tamanho_matriz);
}
#endif // !CERCA_SPAWN_H
