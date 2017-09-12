#ifndef SUPORTEESCRITABIBLIOTECA_H
#define SUPORTEESCRITABIBLIOTECA_H

void escrever_ordem_casas()
{
	int matriz_location[TAMANHO_MATRIZ_JOGO][TAMANHO_MATRIZ_JOGO],
		ponteiro_matriz = 0;

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
		{
			ponteiro_matriz = linha * TAMANHO_MATRIZ_JOGO + coluna;
			matriz_location[linha][coluna] = ponteiro_matriz + 1;
		}

	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
	{
		cout << "|";

		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
			cout << matriz_location[linha][coluna] << "	|";

		cout << endl;
	}
}

void escrever_matriz(string matriz_jogo[][TAMANHO_MATRIZ_JOGO])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ_JOGO; linha++)
	{
		cout << "|";

		for (int coluna = 0; coluna < TAMANHO_MATRIZ_JOGO; coluna++)
			cout << matriz_jogo[linha][coluna] << "	|";

		cout << endl;
	}

	cout << endl;
}

#endif // !SUPORTEESCRITABIBLIOTECA_H




