// 05.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

double perimetro_circulo(double raio)
{
	return (3, 14 * 2 * raio);
}

double area_circulo(double raio)
{
	return (3,14 * (raio*raio));
}

void ler_raio()
{
	double raio;

	cout << "Insira o raio de um círculo" << endl;
	cin >> raio;

	cout << "A area do circulo é: " << area_circulo(raio) << endl;
	cout << "O perimetro do circulo é: " << perimetro_circulo(raio);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	ler_raio();

	cin.get();
	cin.get();

    return 0;
}

