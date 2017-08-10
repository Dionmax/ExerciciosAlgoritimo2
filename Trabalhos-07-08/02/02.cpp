// 02.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const int NUMERO_NOTAS = 3;

string media_aluno(double nota) 
{
	if (nota / NUMERO_NOTAS < 6)
		return "REPROVADO";
	else
		return "APROVADO";
}

void pedido()
{
	double notas[NUMERO_NOTAS],
		total=0;

	char solicitacao;

	cout << "Insira as " << NUMERO_NOTAS << " notas do aluno(a):"<< endl;

	for (int cont = 0; cont < NUMERO_NOTAS; cont++)
	{
		cin >> notas[cont];
		total += notas[cont];
	}
	
	cout << "O aluno foi: " << media_aluno(total);

	cin.get();
	cin.get();

	cout << "Deseja rever as notas? (S/N)";

	cin >> solicitacao;

	if (solicitacao == 's'||'S')
	{
		for (int cont = 0; cont < NUMERO_NOTAS; cont++)
			cout << "Nota " << cont + 1 << ": " << notas[cont] << endl;
	}

	cin.get();
	cin.get();


}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	pedido();

    return 0;
}

