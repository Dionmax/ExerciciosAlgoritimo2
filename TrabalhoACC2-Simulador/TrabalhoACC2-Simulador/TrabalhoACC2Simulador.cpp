// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"
#include "CercaSpawn.h"
#include "suporte_escrita.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	menu_central();

	cout << endl;

	system("pause");

	return 0;
}
