#ifndef MINIMAXJOGODAVELHA_H
#define MINIMAXJOGODAVELHA_H

struct Movimento
{
	int linha,
		coluna;
};

bool restam_jogadas(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
			if (matriz_jogo[linha][coluna] == "")
				return true;
	return false;
}

int calculo_pontuacao(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	for (int contador = 0; contador < TAMANHO_MATRIZ_JOGO; contador++)
		if (matriz_jogo[contador][ZERO] == matriz_jogo[contador][UM] && matriz_jogo[contador][ZERO] != "")
			if (matriz_jogo[contador][ZERO] == matriz_jogo[contador][DOIS])
				if (matriz_jogo[contador][ZERO] == "X")
					return 10;
				else
					return -10;

	for (int contador = 0; contador < TAMANHO_MATRIZ_JOGO; contador++)
		if (matriz_jogo[ZERO][contador] == matriz_jogo[UM][contador] && matriz_jogo[ZERO][contador] != "")
			if (matriz_jogo[ZERO][contador] == matriz_jogo[DOIS][contador])
				if (matriz_jogo[ZERO][contador] == "X")
					return 10;
				else
					return -10;

	if (matriz_jogo[ZERO][ZERO] == matriz_jogo[UM][UM] && matriz_jogo[ZERO][ZERO] != "")
		if (matriz_jogo[ZERO][ZERO] == matriz_jogo[DOIS][DOIS])
			if(matriz_jogo[ZERO][ZERO] == "X")
				return 10;
			else
				return -10;

	if (matriz_jogo[ZERO][DOIS] == matriz_jogo[UM][UM] && matriz_jogo[ZERO][DOIS] != "")
		if (matriz_jogo[ZERO][DOIS] == matriz_jogo[DOIS][ZERO])
			if(matriz_jogo[ZERO][DOIS] == "X")
				return 10;
			else
				return -10;

	return 0;
}

int minimax(string matriz_jogo[][TAMANHO_MATRIZ_JOGO], int profundidade, bool jogada_max)
{
	int pontuacao = calculo_pontuacao(matriz_jogo);

	if (pontuacao == 10 || pontuacao == -10)
		return pontuacao;

	if (!restam_jogadas)
		return 0;

	if (jogada_max)
	{
		int melhor_pontuacao = -1000;

		for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
			for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
				if (matriz_jogo[linha][coluna] == "")
				{
					matriz_jogo[linha][coluna] = JOGADOR_O;

					melhor_pontuacao = fmax(melhor_pontuacao, minimax(matriz_jogo, profundidade + 1, !jogada_max));

					matriz_jogo[linha][coluna] = "";
				}

		return melhor_pontuacao;
	}
	else
	{
		int melhor_pontuacao = 1000;

		for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
			for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
				if (matriz_jogo[linha][coluna] == "")
				{
					matriz_jogo[linha][coluna] = JOGADOR_X;

					melhor_pontuacao = fmin(melhor_pontuacao, minimax(matriz_jogo, profundidade + 1, !jogada_max));

					matriz_jogo[linha][coluna] = "";
				}

		return melhor_pontuacao;
	}
}

Movimento melhor_movimento(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	int melhor_valor = -1000;

	Movimento melhormovimento;

	melhormovimento.linha = -1;
	melhormovimento.coluna = -1;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			if (matriz_jogo[linha][coluna] == "")
			{
				matriz_jogo[linha][coluna] = JOGADOR_O;

				int movimento_valor = minimax(matriz_jogo, 0, false);

				matriz_jogo[linha][coluna] = "";

				if (movimento_valor > melhor_valor)
				{
					melhormovimento.linha = linha;
					melhormovimento.coluna = coluna;
					melhor_valor = movimento_valor;
				}
			}
		}
	}

	return melhormovimento;
}

#endif // !MINIMAXJOGODAVELHA_H
