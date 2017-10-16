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

void gerar_cercas_pequeno()
{


}

void gerar_cercas_medio()
{

}
void gerar_cercas_grande()
{

}

void centro(int quantidade_linhas_matriz)
{
	int
		comeco_linha = quantidade_linhas_matriz / 2 - 2,
		limite_linha = quantidade_linhas_matriz / 2 + 1,
		comeco_coluna = QUANTIDADE_COLUNAS / 2 - 2,
		limite_coluna = QUANTIDADE_COLUNAS / 2 + 1;

}

void canto_superior_esquerdo(int quantidade_linhas_matriz)
{
	int
		comeco_linha = 1,
		limite_linha =  4,
		comeco_coluna = 1,
		limite_coluna = 4;

}

void canto_superior_direito(int quantidade_linhas_matriz)
{
	int
		comeco_linha = 1,
		limite_linha = 4,
		comeco_coluna = QUANTIDADE_COLUNAS - 2, 
		limite_coluna = QUANTIDADE_COLUNAS - 5;

}

void canto_inferior_esquerdo(int quantidade_linhas_matriz)
{
	int
		comeco_linha = quantidade_linhas_matriz - 2,
		limite_linha = quantidade_linhas_matriz - 5,
		comeco_coluna = 1,
		limite_coluna = 4;

}
void canto_inferior_direito(int quantidade_linhas_matriz)
{
	int
		comeco_linha = quantidade_linhas_matriz - 2,
		limite_linha = quantidade_linhas_matriz - 5,
		comeco_coluna = QUANTIDADE_COLUNAS - 2,
		limite_coluna = QUANTIDADE_COLUNAS - 5;

}
void gerar_cercas(int quantidade_linhas_matriz)
{

}
#endif // !CERCA_SPAWN_H
