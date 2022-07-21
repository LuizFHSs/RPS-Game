#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int op = 0, pj1=0, pj2=0, j1, j2, p;
	cout << "\tPEDRA, PAPEL E TESOURA\n";
	cout << "Bem vindo ao jogo do pedra, papel e tesoura!\n\nAs regras são:\n";
	cout << "\nÉ um jogo para duas pessoas.";
	cout << "\nÉ uma partida melhor de 3.";
	cout << "\nQuem escolher pedra, ganha de tesoura e recebe 1 ponto.";
	cout << "\nQuem escolher papel, ganha de pedra e recebe 1 ponto.";
	cout << "\nQuem escolher tesoura, ganha de pedra e recebe 1 ponto.\n\n";
	cout << "Inciar jogo? (1-S / 2-N)\n";
	cin >> op;
	
	if(op == 1)
	{
		for(p = 0; p <= 2; p++)
		{
			cout << "\tVEZ DO JOGADOR 1\n";
			cout << "Escolha entre as opções abaixo:\n\n";
			cout << "1 para PEDRA\n";
			cout << "2 para PAPEL\n";
			cout << "3 para TESOURA\n";
			cout << "\nOpção escolhida: ";
			cin >> j1;
			cout << "\n";
			cout << "\tVEZ DO JOGADOR 2\n";
			cout << "Escolha entre as opções abaixo:\n\n";
			cout << "1 para PEDRA\n";
			cout << "2 para PAPEL\n";
			cout << "3 para TESOURA\n";
			cout << "\nOpção escolhida: ";
			cin >> j2;
			cout << "\n";
			
			if(j1 == 1 && j2 == 3)
			{
				cout << "Jogador 1 venceu esta rodada!\n\n";
				pj1++;
			}else
			{
				if(j1 == 3 && j2 == 1)
				{
					cout << "Jogador 2 venceu esta rodada!\n\n";
					pj2++;
				}	
			}
	
			if(j1 == 3 && j2 == 2)
			{
				cout << "Jogador 1 venceu esta rodada!\n\n";
				pj1++;
			}else
			{
				if(j1 == 2 && j2 == 3)
				{
					cout << "Jogador 2 venceu esta rodada!\n\n";
					pj2++;
				}	
			}
			if(j1 == 2 && j2 == 1)
			{
				cout << "Jogador 1 venceu esta rodada!\n\n";
				pj1++;
			}else
			{
				if(j1 == 1 && j2 == 2)
				{
					cout << "Jogador 2 venceu esta rodada!\n\n";
					pj2++;
				}	
			}
			
			if(j1 == j2)
			{
				cout << "Jogo Empatado!\n\n";
			}
		}
		
		cout << "Pontos do jogador 1: " << pj1 << "\n" << "Pontos do jogador 2: " <<pj2;
		if(pj1>pj2)
		{
			cout << "\n\nJOGADOR 1 FOI O VENCEDOR DA PARTIDA!";
		}else
		{
			if(pj2>pj1)
			{
				cout << "\n\nJOGADOR 2 FOI O VENCEDOR DA PARTIDA!";
			}
		}
		
		if (pj1 == pj2)
		{
			cout << "\n\nO JOGO TERMINOU EMPATADO!";
		}
	}
}
