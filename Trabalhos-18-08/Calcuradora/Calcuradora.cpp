// Calcuradora.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "Matematica-basica.h"

using namespace std;

void menu_texto()
{
	cout << endl << endl << "Qual operação deseja realizar?:" << endl;
	cout << "1 - Adição " << endl << "2 - Subtração " << endl;
	cout << "3 - Multiplicação " << endl << "4 - Divisão " << endl;
	cout << "5 - Potencia." << endl << "6 - Sair do programa." << endl;
}

void menu()
{
	double 
		numero_um,
		numero_dois;

	int escolhas = 0;

	bool continuacao_programa = true;

	do
	{
		menu_texto();
		cin >> escolhas;

		if (escolhas > 0 && escolhas < 7)
		{
			cout << endl << endl << "Insira dois numeros:" << endl;
			cin >> numero_um >> numero_dois;
		}
		
		switch (escolhas)
		{
		case 1:
			cout << "Resultado da operação: " << mbAdicao(numero_um, numero_dois);
			break;

		case 2:
			cout << "Resultado da operação: " << mbSubtracao(numero_um, numero_dois);
			break;

		case 3:
			cout << "Resultado da operação: " << mbMultiplicacao(numero_um, numero_dois);
			break;

		case 4:
			cout << "Resultado da operação: " << mbDivisao(numero_um, numero_dois);
			break;

		case 5:
			cout << "Resultado da operação: " << mbPotencia(numero_um, numero_dois);
			break;

		case 6:
			cout << "Programa encerrado!";
			continuacao_programa = false;
			break;

		default:
			cout << "Oque você fez pra conseguir chegar aqui??";
			break;
		}
	} while (continuacao_programa);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu();

	cin.get();
	cin.get();

    return 0;
}

