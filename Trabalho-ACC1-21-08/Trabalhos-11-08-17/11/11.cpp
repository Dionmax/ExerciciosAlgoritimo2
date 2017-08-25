// 11.cpp : Define o ponto de entrada para a aplicação de console. Feito pelo DIONMAX
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int TAMANHO = 3;

void matriz_usuario()
{
	int matriz[TAMANHO][TAMANHO];

	cout << "Insira alguns numeros ai véi: " << endl;

	for (int cont = 0; cont < TAMANHO; cont++)
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cin >> matriz[cont][cont2];

	system("cls");

	for (int cont = 0; cont < TAMANHO; cont++)
	{
		for (int cont2 = 0; cont2 < TAMANHO; cont2++)
			cout << matriz[cont][cont2] << "	|";

		cout << endl;
	}

	cin.get();
	cin.get();

}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	matriz_usuario();

    return 0;
}

