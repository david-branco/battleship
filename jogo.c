/*
**JOGO
*/

int jogo (int nJogadas, Frota frota, int dificuldade) {

	int i = 0 ;
	Tiro tiro_1, tiro_2, tiro_3;														//Coordenadas dos tiros, que vão ser guardadas numa estrutura.
	int letraConvertida_T1, letraConvertida_T2 , letraConvertida_T3 ;			//Letra convertida para um inteiro util na matriz (nosso caso de 0 a 9).
	int numeroConvertido_T1, numeroConvertido_T2 , numeroConvertido_T3 ;		//Numero convertida para um inteiro util na matriz (nosso caso de 0 a 9).
	char charDoTiro_1, charDoTiro_2, charDoTiro_3;										/*Verifica no tabuleiro da frota adversária, a que caracter 																						corresponde o tiro enviado.*/
	
	bool coordsOK = FALSE, colunaValida = FALSE, linhaValida = FALSE;					//Booleanos para verificar as coordenadas recebidas do utilizador.
	int acertou_T1, acertou_T2, acertou_T3;												//Resultado de um tiro avaliado, descrito na função que o devolve.
	int linha, coluna;																	/*Para uma melhor compreensão definimos estas "alcunhas" que 																						representam uma posição	no tabuleiro*/
	
	int contaJogadas = 0;													//Conta o total de jogadas, sendo mais tarde dito ao utilizador quantas usou.
	int afundados = 0;													//Conta o total de barcos afundados da frota, sendo comparado depois com o número 																			//total de barcos na frota. Sendo igual corresponde a ter afundado todos os barcos.

	char tabuleiroVazio[DIM][DIM]= {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},					/*Tabuleiro Vazio, onde vão ser marcados os resultados */
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},				 	/*dos tiros do utilizador. Será o tabuleiro do  */ 										{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},					/*utilizador*/
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},				
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},							
									{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};

	
 	printf("\n ***************************************** \n");
	printf(" Introduza para coluna uma letra de A até\n J (maiúscula ou minúscula) e para linha\n um número natural de 1 até 10.");	 
 	printf("\n ***************************************** \n");
	 	
	while (i < nJogadas && afundados < frota.nBarcos) {								//Enquanto houver jogadas e barcos , continua o jogo.
		i++;																			
		contaJogadas++;
		mostraTabuleiro(tabuleiroVazio);											//Mostra ao jogador, o tabuleiro com as suas jogadas.

	//Guardar as coordenadas recebidas dos 3 tiros.
	//Converte as coordenadas em inteiros úteis para aplicar na matriz.
	//Testa se os valores são válidos.
		while(coordsOK == FALSE) {
			printf("Indique as coordenadas do primeiro tiro.\n");
			printf("Coluna: "); scanf(" %c",&tiro_1.cTiro); getBarraN;
			printf("Linha: "); scanf("%d",&tiro_1.lTiro); getBarraN;

			letraConvertida_T1 = convLetra(tiro_1.cTiro);
			numeroConvertido_T1 = tiro_1.lTiro; numeroConvertido_T1--;
						
			colunaValida = testaCoordColuna (tiro_1.cTiro);
			linhaValida = testaCoordLinha (numeroConvertido_T1);
			coordsOK = (colunaValida && linhaValida);
		}
		coordsOK = FALSE;

		while(coordsOK == FALSE) {
			printf("Indique as coordenadas do segundo tiro.\n");
			printf("Coluna: "); scanf(" %c",&tiro_2.cTiro); getBarraN;
			printf("Linha: "); scanf("%d",&tiro_2.lTiro); getBarraN;
			
			letraConvertida_T2 = convLetra(tiro_2.cTiro);
			numeroConvertido_T2 = tiro_2.lTiro; numeroConvertido_T2--;
	
			colunaValida = testaCoordColuna (tiro_2.cTiro);
			linhaValida = testaCoordLinha (numeroConvertido_T2);
			coordsOK = (colunaValida && linhaValida);
		}
		coordsOK = FALSE;

		while(coordsOK == FALSE) {
			printf("Indique as coordenadas do terceiro tiro.\n");
			printf("Coluna: "); scanf(" %c",&tiro_3.cTiro); getBarraN;
			printf("Linha: "); scanf("%d",&tiro_3.lTiro); getBarraN;

			letraConvertida_T3 = convLetra(tiro_3.cTiro);
			numeroConvertido_T3 = tiro_3.lTiro; numeroConvertido_T3--;

			colunaValida = testaCoordColuna (tiro_3.cTiro);
			linhaValida = testaCoordLinha (numeroConvertido_T3);
			coordsOK = (colunaValida && linhaValida);
		}
		coordsOK = FALSE;



		//Devolve o char que está no tabuleiro na posição do tiro, para identificar em quê especificamente acertou.
		charDoTiro_1 = frota.tabuleiro[numeroConvertido_T1][letraConvertida_T1];
		charDoTiro_2 = frota.tabuleiro[numeroConvertido_T2][letraConvertida_T2];
		charDoTiro_3 = frota.tabuleiro[numeroConvertido_T3][letraConvertida_T3];
		
		system ("clear");
		
		/*Função de várias utilidades, tais como desenha o resultado do tiro no tabuleiro, redesenha se afundou, envia mensagens ao utilizador a informar 			o resultado do tiro, testa jogadas repetidas... tudo isto conforme o grau de dificuldade selecionado. Devolve o resultado um inteiro que é : 0 se 			Água ou jogada repetida; 1 se acertou no barco, mas não o afundou; 2 se o afundou.
		Para uma melhor descrição ver os comentários na própria função.*/
 		printf("\n ***************************************** \n");
		acertou_T1 = avaliaTiro(charDoTiro_1, numeroConvertido_T1 , letraConvertida_T1  , tabuleiroVazio , &frota, dificuldade);
		acertou_T2 = avaliaTiro(charDoTiro_2, numeroConvertido_T2 , letraConvertida_T2  , tabuleiroVazio , &frota, dificuldade);
		acertou_T3 = avaliaTiro(charDoTiro_3, numeroConvertido_T3 , letraConvertida_T3  , tabuleiroVazio , &frota, dificuldade);

		/*Verifica se um determinado tiro afundou um barco. Se sim incrementa a variável afundou e quando esta for igual ao numero total de barcos da 			frota, então a frota adversária foi afundada.*/
		afundados += nAfundados(acertou_T1, acertou_T2, acertou_T3);	 						
	 	printf("\n ***************************************** \n");

	}
	//O ciclo while acaba, portanto ou acabaram-se as jogadas disponíveis, ou o utilizador afundou a frota adversária.

	//Envia o resultado ao utilizador, dizendo caso ter ganho em quantas jogadas, e o modo de dificuldade.
	if ( i < nJogadas && afundados == frota.nBarcos) {
		printf("\n ************************************************* \n");
		printf(" Você ganhou em "); 
		switch (dificuldade) {
			case 1 : printf("modo Facílimo"); break;
			case 2 : printf("modo Fácil"); break;
			case 3 : printf("modo Normal"); break;
			case 4 : printf("modo Difícil"); break;
			case 5 : printf("modo Difícilimo"); break;
		}
		printf(" e em %d jogadas !!\n", contaJogadas);
		printf("\t\tPARABÉNS !!\n");
	    printf("\n ************************************************* \n");
	}
		else {
			printf("\n************************\n");
			printf("    Você perdeu !!\n");
			printf("\n************************\n");
		}

	//Revela o tabuleiro do utilizador após a ultima jogada.
	//Se o Modo de dificuldade selecionado era Difícil ou Difícilimo, so agora é revelado os barcos afundados.
	printf("\n\n\t  TABULEIRO FINAL !!\n");
	if (dificuldade < 4) {
		mostraTabuleiro(tabuleiroVazio);
	}
	
	else {
		for(linha = 0; linha < DIM; linha++) {
			for(coluna = 0; coluna < DIM; coluna++) {
				if (frota.tabuleiro[linha][coluna] != '0') {
					tabuleiroVazio[linha][coluna] = '!';
				}
			}
		}
		mostraTabuleiro(tabuleiroVazio);
	}

	
	return 1;
}

