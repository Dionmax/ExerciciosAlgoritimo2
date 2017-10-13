#ifndef SUPORTE_ESCRITA_H
#define SUPORTE_ESCRITA_H

const int LOCALIZACAO_LINHA_ARRAY = 0;
const int LOCALIZACAO_COLUNA_ARRAY = 1;

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
		"6 - Gerar virus na matriz Grande (Sem consulta)." << endl;

	cin >> opcao;

	return opcao;
}

int menu_da_localizacao_da_propagacao()
{
	int opcao = 0;

	cout << 
		"Desejas que o virus começar a partir da onde:" << endl << endl << 
		"Canto superior esquerdo" << endl <<
		"Canto superior direito" << endl <<
		"Canto inferior esquerdo" << endl <<
		"Canto inferior direito" << endl;

	cin >> opcao;

	return opcao;
}

int menu_da_localizacao_manual_pequena()
{
	int localizacoes[2];

	cout << "Linha que o virus deve nascer (Min:0,Max:10):";
	cin >> localizacoes[LOCALIZACAO_LINHA_ARRAY];

	cout << endl;

	cout << "coluna que o virus deve nascer (Min:0,Max:19):";
	cin >> localizacoes[LOCALIZACAO_COLUNA_ARRAY];
}

int menu_da_localizacao_manual_media()
{
	int localizacoes[2];

	cout << "Linha que o virus deve nascer (Min:0,Max:15):";
	cin >> localizacoes[LOCALIZACAO_LINHA_ARRAY];

	cout << endl;

	cout << "coluna que o virus deve nascer (Min:0,Max:19):";
	cin >> localizacoes[LOCALIZACAO_COLUNA_ARRAY];
}

int menu_da_localizacao_manual_grande()
{
	int localizacoes[2];

	cout << "Linha que o virus deve nascer (Min:0,Max:24):";
	cin >> localizacoes[LOCALIZACAO_LINHA_ARRAY];

	cout << endl;

	cout << "coluna que o virus deve nascer (Min:0,Max:19):";
	cin >> localizacoes[LOCALIZACAO_COLUNA_ARRAY];
}

#endif // !SUPORTE_ESCRITA_H

