#ifndef MATEMATICABASICA_H
#define MATEMATICABASICA_H


#include "stdafx.h"
#include "iostream"

double mbAdicao(double numero_um, double numero_dois);
double mbSubtracao(double numero_um, double numero_dois);
double mbDivisao(double numero_um, double numero_dois);
double mbMultiplicacao(double numero_um, double numero_dois);
double mbPotencia(double numero_um, double numero_dois);

double mbAdicao(double numero_um, double numero_dois)
{
	return numero_um + numero_dois;
}

double mbSubtracao(double numero_um, double numero_dois)
{
	return numero_um - numero_dois;
}

double mbDivisao(double numero_um, double numero_dois)
{
	return numero_um / numero_dois;
}

double mbMultiplicacao(double numero_um, double numero_dois)
{
	return numero_um * numero_dois;
}

double mbPotencia(double numero_um, double numero_dois)
{
	double total = numero_um;

	for (int cont = 1; cont < numero_dois; cont++)
		total *= numero_um;

	return total;
}

#endif // !MATEMATICA-BASICA_H