#include <stdio.h>
#include <string.h>
#include <time.h>
#include "estrutura.h"														//Ficheiro com a estrutura do jogo.
#include "funcAux.c"														//Ficheiro com as funções auxíliares do jogo.
#include "frotas&tabuleiros.c"												//Ficheiro com 11 frotas, 10 delas podendo ser escolhidas aleatoriamente.
#include "tabUser.c"														//Ficheiro que permite ao utilizador inserir o seu próprio tabuleiro.
#include "menus.c"															//Ficheiro com os menus que aparecem no ecrã do utilizador.
#include "jogo.c"															//Ficheiro com o jogo em si.
	
/*
**MAIN
*/


int main () {
	int opcao;																//variável para guardar a opção escolhida do menu.
	int nJogadas = 17;														//Número de jogadas predefinidas, caso o utilizador não altere a dificuldade.
	int dificuldade = 3;													//Dificuldade predefinida, (Normal) caso o utilizador não altere.
	int random = 0;															//Tabuleiro predefinido , caso o utilizador não altere.
	bool jogadasOK = FALSE;													//Booleano para verificar o Número de jogadas dado pelo utilizador.
	
	Frota frota;
	selecionaFrota(&frota, random);											//Seleciona a frota predefinida.

	system ("clear");
	menu();

	while (opcao != 6 && opcao != 1) {
		printf("Opção pretendida: "); scanf("%d",&opcao);
//		mostraTabuleiro(frota.tabuleiro);

		switch (opcao) {
			case 1 : system ("clear");												/*Permite ao utilizador começar a jogar. Se este for directamente   */
					 jogo (nJogadas, frota, dificuldade); break;					/*para esta opção, vai jogar em modo predefinido (Dificuldade Normal*/
																					/*17 jogadas possíveis, e frota predefinida.						*/
			
			case 2 : while (jogadasOK == FALSE) { 
						printf("Insira o Número de tentativas desejado: ");					//Permite ao utilizador indicar o número de jogadas disponiveis.
						scanf(" %d", &nJogadas);	
						system ("clear");
						if (nJogadas > 0) {
							printf("\n\n\tO valor das jogadas possíveis passou para %d !!\n\n",nJogadas);
							jogadasOK = TRUE;
						}
						else {printf("Introduziu um valor invalido\n");}
					}
					jogadasOK = FALSE; menu(); break;
				 
			case 3 : system ("clear"); dificuldade = escolherDificuldade();				//Permite ao utilizador selecionar o grau de dificuldade desejado.
					 switch(dificuldade) {
						 case 1 : nJogadas = 25; break;
						 case 2 : nJogadas = 17; break;
						 case 3 : nJogadas = 17; break;
						 case 4 : nJogadas = 17; break;
						 case 5 : nJogadas = 11; break;
					 }	 			 
					 menu(); break;
				 
			case 4 : system ("clear"); menuUser(); 										//Permite ao utilizador introduzir o seu próprio tabuleiro.
					 frotaUtilizador(&frota); system ("clear");
					 printf("\n\n\t\tTabuleiro completo !!\n\n");
					 menu(); break;
		
			case 5 : random = (rand() % 10 + 1);										//Seleciona aleatoriamente um tabuleiro entre 10.
					 selecionaFrota(&frota, random);
					 system ("clear");
					 printf("\n\n\tTabuleiro aleatorio escolhido !!\n\n");
					 menu(); break;
		
			case 6 : system ("clear");
					 printf("\n\n\tADEUS !!\n\n");
		}
	}
	
	return 1;
}
