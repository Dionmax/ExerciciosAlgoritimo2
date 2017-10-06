#ifndef OPERACAOARRAYS_H
#define OPERACAOARRAYS_H

#define ORDENACAO_CRESCENTE 0
#define ORDENACAO_DECRESCENTE 1
#define MAIOR_INDICE 0
#define MENOR_INDICE 1
#define MAIOR_VALOR 3
#define MENOR_VALOR 4


template <typename T>
void trocar_valores(T &valor_um, T &valor_dois)
{
	T variavel_aux;

	variavel_aux = valor_um;
	valor_um = valor_dois;
	valor_dois = variavel_aux;
}

template <typename T>
void bubblesort(T array[],int tamanho, int ordenacao = 0)
{
	for (int contador = 0; contador < tamanho - 1; contador++)
		for (int indice = 0; indice < tamanho - 1; indice++)
			if (array[indice] > array[indice + 1] && ordenacao == ORDENACAO_CRESCENTE ||
				array[indice] < array[indice + 1] && ordenacao == ORDENACAO_DECRESCENTE)
				trocar_valores(array[indice], array[indice + 1]);
}

template <typename T>
void inverter_ordem(T array[], int tamanho)
{
	int tamanho_aux = tamanho - 1;

	for (int contador = 0; contador < tamanho / 2; contador++)
	{
		trocar_valores(array[contador], array[tamanho_aux]);
		tamanho_aux--;
	}
}

template <typename T>
void encontrar_valores(T array[],int tamanho, int valores_encontrados[2])
{
	int indice_maior, indice_menor;

	T valor_maior,
		valor_menor;

	for (int contador = 0; contador < tamanho; contador++)
	{
		if (contador == 0 || array[contador] < valor_maior)
		{
			valor_maior = array[contador];
			indice_maior = contador;
		}

		if (contador == 0 || array[contador] > valor_menor)
		{
			valor_menor = array[contador];
			indice_menor = contador;
		}
	}

	valores_encontrados[MAIOR_INDICE] = valor_maior;
	valores_encontrados[MENOR_INDICE] = valor_menor;
}

template <typename T>
T encontrar_indices(T array[], int tamanho, int indice)
{
	int resultado[2] = { 0 };

	encontrar_valores(array, tamanho, resultado);

	return resultado[indice];
}

template <typename T>
T encontrar_maior_valor(T array[], int tamanho)
{
	int indicemaior = encontrar_indices(array, tamanho, MAIOR_INDICE);

	return array[indicemaior];
}

template <typename T>
T encontrar_menor_valor(T array[], int tamanho)
{
	int indicemenor = encontrar_indices(array, tamanho, MENOR_INDICE);
	return array[indicemenor];
}

template <typename T>
T encontrar_indice_maior_valor(T array[], int tamanho)
{
	return encontrar_indices(array, tamanho, MAIOR_INDICE);
}

template <typename T>
T encontrar_indice_menor_valor(T array[], int tamanho)
{
	return encontrar_indices(array, tamanho, MENOR_INDICE);
}

#endif // !OPERACAOARRAYS_H

