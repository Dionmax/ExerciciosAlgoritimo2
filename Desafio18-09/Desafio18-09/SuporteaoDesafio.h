#ifndef SUPORTEAODESAFIO_H
#define SUPORTEAODESAFIO_H

#define TAMANHO_MATRIZ 3

bool igualdade_horizontal(int matriz[][TAMANHO_MATRIZ])
{
	int horizontal = 0;

	bool verificacao = true;

	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		int aux = 0;

		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			if (linha == 0)
				horizontal += matriz[linha][coluna];

			aux += matriz[linha][coluna];
		}

		if (aux != horizontal)
			verificacao = false;
	}

	return verificacao;
}

bool igualdade_vertical(int matriz[][TAMANHO_MATRIZ])
{
	int vertical = 0;

	bool verificacao = true;

	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		int aux = 0;

		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			if (linha == 0)
				vertical += matriz[coluna][linha];

			aux += matriz[coluna][linha];
		}

		if (aux != vertical)
			verificacao = false;
	}

	return verificacao;
}

bool igualdade_diagonais(int matriz[][TAMANHO_MATRIZ])
{
	int primaria = 0,
		secundaria = 0;

	bool verificacao = true;

	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			primaria += matriz[linha][linha];

			if ((TAMANHO_MATRIZ - 1) - linha == coluna)
				secundaria += matriz[linha][coluna];
		}

	if (primaria != secundaria)
		verificacao = false;

	return verificacao;
}

bool verificar_igualdade(int matriz[][TAMANHO_MATRIZ])
{
	bool verificacao = true;

	verificacao = igualdade_horizontal(matriz);

	if (verificacao)
		verificacao = igualdade_vertical(matriz);
	
	if (verificacao)
		verificacao = igualdade_diagonais;

	return verificacao;
}


#endif // !SUPORTEAODESAFIO_H
