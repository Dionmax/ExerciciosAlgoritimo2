#ifndef VIRUSSPAWN_H
#define VIRUSSPAWN_H

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

int busca_recursiva(char campo[][QUANTIDADE_COLUNAS], int tamanho_matriz, int linha, int coluna)
{
	escreverUmDosCampos(TAMANHO_GRANDE);

	if (verificar_casa(campo, tamanho_matriz, linha, coluna))
		campo[linha][coluna] = VIRUS;
	else
		return NADA;

	for (int linha_dois = -1; linha_dois < 2; linha_dois++)
		for (int coluna_dois = -1; coluna_dois < 2; coluna_dois++)
			 busca_recursiva(campo, tamanho_matriz, linha + linha_dois, coluna + coluna_dois);
}


#endif // !VIRUSSPAWN_H

