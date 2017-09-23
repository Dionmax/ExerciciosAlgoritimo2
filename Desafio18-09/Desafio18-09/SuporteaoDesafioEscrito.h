#ifndef SUPORTEAODESAFIOESCRITO_H
#define SUPORTEAODESAFIOESCRITO_H

#include <iostream>

using namespace std;

void escrever_matriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ])
{
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++)
		{
			cout << matriz[linha][coluna] << " ";
		}
		cout << endl;
	}

	cout << endl;
}

void escreva_nada()
{
	cout << "NADA" << endl;
}

#endif // !SUPORTEAODESAFIOESCRITO_H

