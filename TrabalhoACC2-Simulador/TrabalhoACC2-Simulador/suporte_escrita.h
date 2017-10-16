#ifndef SUPORTE_ESCRITA_H
#define SUPORTE_ESCRITA_H

int menu_de_propagacao_virus()
{
	int opcao = 0;

	cout << 
		"Escolha uma opção para propagar o virus:" << endl << endl <<
		"1 - Gerar virus na matriz Pequena (Com consulta)." << endl <<
		"2 - Gerar virus na matriz Média (Com consulta)." << endl <<
		"3 - Gerar virus na matriz Grande (Com consulta)" << endl <<
		"4 - Gerar virus na matriz Pequena (Sem consulta)." << endl <<
		"5 - Gerar virus na matriz Média (Sem consulta)." << endl <<
		"6 - Gerar virus na matriz Grande (Sem consulta)." << endl << endl;

	cin >> opcao;

	return opcao;
}

bool testar_localizacao(int tamanho, int &linha, int &coluna)
{
	bool validacao = false;

	switch (tamanho)
	{
	case 0:
		if (linha < QUANTIDADE_LINHAS_PARA_MENORES && linha > 0)
			validacao = true;
		break;
	case 1:
		if (linha < QUANTIDADE_LINHAS_PARA_MEDIOS && linha > 0)
			validacao = true;
		break;
	case 2:
		if (linha < QUANTIDADE_LINHAS_PARA_GRANDES && linha > 0)
			validacao = true;
		break;
	default:
		break;
	}

	if (!(coluna < QUANTIDADE_COLUNAS && coluna > 0))
		validacao = false;

	return validacao;
}

void menu_da_localizacao_manual(int tamanho, int &linha, int &coluna)
{
	string escrita_linha[3];

	escrita_linha[0] = "Linha que o virus deve nascer (Min:1,Max:9):";
	escrita_linha[1] = "Linha que o virus deve nascer (Min:1,Max:14):";
	escrita_linha[2] = "Linha que o virus deve nascer (Min:1,Max:24):";

	do
	{
		switch (tamanho)
		{
		case 0:
			cout << escrita_linha[0] << endl;
			cin >> linha;
			break;
		case 1:
			cout << escrita_linha[1] << endl;
			cin >> linha;
			break;
		case 2:
			cout << escrita_linha[2] << endl;
			cin >> linha;
			break;
		default:
			break;
		}

		cout << "coluna que o virus deve nascer (Min:1,Max:19):" << endl;
		cin >> coluna;

		if (!testar_localizacao(tamanho, linha, coluna))
			cout << endl << "Tamanhos invalidos!" << endl << endl;

	} while (!testar_localizacao(tamanho, linha, coluna));
}

void menu_virus()
{
	int linha = 0, coluna = 0;

	cout << "|Interface de usuário|" << endl << endl;

	switch (menu_de_propagacao_virus())
	{
	case 1:
		menu_da_localizacao_manual(0, linha, coluna);
		busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, linha, coluna, TAMANHO_PEQUENO);
		break;
	case 2:
		menu_da_localizacao_manual(1, linha, coluna);
		busca_recursiva(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, linha, coluna, TAMANHO_MEDIO);
		break;
	case 3:
		menu_da_localizacao_manual(2, linha, coluna);
		busca_recursiva(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, linha, coluna, TAMANHO_GRANDE);
		break;
	case 4:
		menu_da_localizacao_manual(0, linha, coluna);
		busca_recursiva(campoPequeno, QUANTIDADE_LINHAS_PARA_MENORES, linha, coluna, 0);
		escreverUmDosCampos(TAMANHO_PEQUENO);
		break;
	case 5:
		menu_da_localizacao_manual(1, linha, coluna);
		busca_recursiva(campoMedio, QUANTIDADE_LINHAS_PARA_MEDIOS, linha, coluna, 0);
		escreverUmDosCampos(TAMANHO_MEDIO);
		break;
	case 6:
		menu_da_localizacao_manual(2, linha, coluna);
		busca_recursiva(campoGrande, QUANTIDADE_LINHAS_PARA_GRANDES, linha, coluna, 0);
		escreverUmDosCampos(TAMANHO_GRANDE);
		break;
	default:
		break;
	}
}

void menu_cercas()
{
	int opcao = 0;

	cout << "Gerar cercas numa matriz:" << endl <<
		"1 - Pequena" << endl <<
		"2 - Média" << endl <<
		"3 - Grande" << endl;

	cin >> opcao;

	switch (opcao)
	{
	case 1:
		posicionar_cercas(QUANTIDADE_LINHAS_PARA_MENORES);
		escreverUmDosCampos(TAMANHO_PEQUENO);
		break;
	case 2:
		posicionar_cercas(QUANTIDADE_LINHAS_PARA_MEDIOS);
		escreverUmDosCampos(TAMANHO_MEDIO);
		break;
	case 3:
		posicionar_cercas(QUANTIDADE_LINHAS_PARA_GRANDES);
		escreverUmDosCampos(TAMANHO_GRANDE);
	default:
		break;
	}
}

void menu_central()
{
	int opcao = 0;

	bool parar = true;

	while (parar)
	{
		cout << "1 - Simular virus" << endl;
		cout << "2 - Simular cercas(Não funcional)" << endl;
		cout << "3 - Sair do menu" << endl;

		cin >> opcao;

		switch (opcao)
		{
		case 1:
			menu_virus();
			break;
		case 2:
			menu_cercas();
			break;
		case 3:
			parar = false;
		default:
			break;
		}
	}
}

#endif // !SUPORTE_ESCRITA_H

