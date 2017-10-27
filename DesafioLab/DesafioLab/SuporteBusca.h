#ifndef SUPORTE_BUSCA_H
#define SUPORTE_BUSCA_H

const int TAMANHO_MATRIZ = 6;
const int CAMINHO = 1;
const int NADA = 0;

struct Direcao
{
	bool ida,
		volta;

	int linha,
		coluna;
};

void prencher_matriz(int matriz[][TAMANHO_MATRIZ], int posicao_1, int posicao_2)
{
	int linha = posicao_1 - 1,
		coluna = posicao_2 - 1;

	matriz[linha][coluna] = CAMINHO;
}

Direcao verificar_caminho(int matriz[][TAMANHO_MATRIZ], int linha, int coluna)
{
	Direcao caminho;

	caminho.ida = false;
	caminho.volta = false;

	if (matriz[linha][coluna] == CAMINHO)
		caminho.ida = true;

	if (matriz[coluna][linha] == CAMINHO)
		caminho.volta = true;

	return caminho;
}

bool passou(int vertices[])
{
	int vertices_existentes[TAMANHO_MATRIZ] = { 0,1,2,3,4,5 };

	bool ainda_resta = true;

	for (int indice = 0; indice < TAMANHO_MATRIZ; indice++)
		if (vertices_existentes[indice] == vertices[indice] && ainda_resta == true)
			ainda_resta = false;

	return ainda_resta;
}

int buscar_caminhos(int matriz[][TAMANHO_MATRIZ], int linha, int coluna)
{
	Direcao caminho = verificar_caminho(matriz, linha, coluna);

	if (caminho.ida)
		buscar_caminhos(matriz, linha, coluna + 1);
	else
		return NADA;
}

#endif // !SUPORTE_BUSCA_H

