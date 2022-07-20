#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	int v[]={1,2,3};
	int p,s;
	int x;
	int p1 =0,p2 =0;
	
	cout << "\tJOGO DO PEDRA, PAPEL E TESOURA\n";
	cout << "A regra do jogo é: \n";
	cout << "Serão 3 rodadas, sendo melhor de 3.\n";
	cout << "Quem escolher pedra, ganha de tesoura e ganha 1 ponto.\n";
	cout << "Quem escolher papel, ganha de pedra e ganha 1 ponto.\n";
	cout << "Quem escolher tesoura, ganha de papel e ganha 1 ponto.\n";
	
	for(x=0; x<=2; x++)
	{
		cout << "\n";
		cout << "***VEZ DO JOGADOR 1***\n";
		cout << "Escolha\n 1 para pedra\n 2 para papel \n 3 para tesoura \n Digite sua ecolha: ";
		cin >> p;
		cout << "\n";
		cout << "***VEZ DO JOGADOR 2***\n";
		cout << "Escolha\n 1 para pedra\n 2 para papel \n 3 para tesoura \n digite sua escolha: ";
		cin >> s;
		
		if(p==v[0]&&s==v[1])
	{
		cout << "\nJogador 2 venceu esta rodada!\n";
		p2++;
	}
	else
	{
		if(p==v[0]&&s==v[2])
		{
			cout << "\nJogador 1 venceu esta rodada!\n";
			p1++;
		}
	}
	
	if(p==v[1]&&s==v[0])
	{
		cout << "\nJogador 1 venceu esta rodada!\n";
		p1++;
	}
	else
	{
		if(p==v[1]&&s==v[2])
		{
			cout << "\nJogador 2 venceu esta rodada!\n";
			p2++;
		}
	}
	
	if(p==v[2]&&s==v[0])
	{
		cout << "\nJogador 2 venceu esta rodada!\n";
		p2++;
	}
	else
	{
		if(p==v[2]&&s==v[1])
		{
			cout << "\nJogador 1 venceu esta rodada!\n";
			p1++;
		}
	}
	if(p==v[0]&&s==v[0])
	{
		cout << "\nJogo empatado!\n";
	}
	else
	{
		if(p==v[1]&&s==v[1])
		{
			cout << "\nJogo empatado!\n";
		}
		else
		{
			if(p==v[2]&&s==v[2])
			{
				cout << "\nJogo empatado!\n";
			}
		}
	}
}
	
	cout << "\nQuantidades de pontos do jogador 1: " << p1 << "\n";
	cout << "Quantidades de pontos do jogador 2: " << p2 << "\n";
	cout << "\n";
	
	if(p1>p2)
	{
		cout << "Jogador 1 ganhou a partida!\n";
	}
	else
	{
		if(p1==p2)
		{
			cout << "Partida empatada!";
		}
		else
		{
			cout << "Jogador 2 venceu a partida!";
		}
	}
}
