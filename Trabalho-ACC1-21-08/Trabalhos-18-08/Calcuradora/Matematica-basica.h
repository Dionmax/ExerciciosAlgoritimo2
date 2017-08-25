#ifndef MATEMATICABASICA_H
#define MATEMATICABASICA_H


#include "stdafx.h"
#include "iostream"

double adicao(double numero_um, double numero_dois);
double subtracao(double numero_um, double numero_dois);
double divisao(double numero_um, double numero_dois);
double multiplicacao(double numero_um, double numero_dois);
double potencia(double numero_um, double numero_dois);

double adicao(double numero_um, double numero_dois)
{
	return numero_um + numero_dois;
}

double subtracao(double numero_um, double numero_dois)
{
	return numero_um - numero_dois;
}

double divisao(double numero_um, double numero_dois)
{
	return numero_um / numero_dois;
}

double multiplicacao(double numero_um, double numero_dois)
{
	return numero_um * numero_dois;
}

double potencia(double numero_um, double numero_dois)
{
	double total = numero_um;

	for (int cont = 1; cont < numero_dois; cont++)
		total *= numero_um;

	return total;
}

#endif // !MATEMATICA-BASICA_H