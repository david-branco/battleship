/*
**FUNÇÕES AUXILIARES
*/

//Dada uma frota, preenche o respectivo tabuleiro.
void preencheTabuleiro (Frota *frota)  {				
	int i, j; 																	//Inteiros que vão percorrer os arrays necessários.
	int linha, coluna; 															/*Representa a coordenada de cada posição de um barco, e para uma 
	 															  				  melhor compreensão definimos estas "alcunhas".*/
	 															  				  
	//Pôr tudo a 0 no tabuleiro (corresponde a água).
	for(i = 0 ; i < DIM ; i++)  {
		for(j = 0; j < DIM ; j++)  {
			frota->tabuleiro[i][j] = '0';
		}
	} 															  				  													  				  
	 															  				  
	//Pôr no tabuleiro o Porta Aviões.
	for(i = 0 ; i < frota->portaAvioes[0].capacidade ; i++) {
		linha = frota->portaAvioes[0].coordenadas[i][0];
		coluna = frota->portaAvioes[0].coordenadas[i][1];			
		frota->tabuleiro[linha][coluna] = frota->portaAvioes[0].id;				
	}
	
	//Pôr no tabuleiro o Navio de 4 Canos.
	for(i = 0 ; i < frota->navio4canos[0].capacidade ; i++) {
		linha = frota->navio4canos[0].coordenadas[i][0];
		coluna = frota->navio4canos[0].coordenadas[i][1];			
		frota->tabuleiro[linha][coluna] = frota->navio4canos[0].id;				
	}
	
	//Pôr no tabuleiro 2 Navios de 3 Canos.
	for(j = 0;  j <= 2 ; j++) {
		for(i = 0 ; i < frota->navio3canos[0].capacidade ; i++) {
			linha = frota->navio3canos[j].coordenadas[i][0];
			coluna = frota->navio3canos[j].coordenadas[i][1];				
			frota->tabuleiro[linha][coluna] = frota->navio3canos[j].id;	
		}		
	}
	
	//Pôr no tabuleiro 3 Navios de 2 Canos.
	for(j = 0;  j <= 3 ; j++) {
		for(i = 0 ; i < frota->navio2canos[0].capacidade ; i++) {
			linha = frota->navio2canos[j].coordenadas[i][0];
			coluna = frota->navio2canos[j].coordenadas[i][1];		
			frota->tabuleiro[linha][coluna] = frota->navio2canos[j].id;		
		}
	}		
	
	//Pôr no tabuleiro 4 Submarinos.	
	for(j = 0;  j <= 4 ; j++) {
		for(i = 0 ; i < frota->submarino[0].capacidade ; i++) {
			linha = frota->submarino[j].coordenadas[i][0];
			coluna = frota->submarino[j].coordenadas[i][1];			
			frota->tabuleiro[linha][coluna] = frota->submarino[j].id;				
		}
	}
		
}

//Desenha no monitor a grelha de um tabuleiro de jogo, e mostra o caracter correspondente das jogadas efectuadas.
void mostraTabuleiro(char tabuleiro[DIM][DIM]) {
	int i , j ;

	printf("\n -----------------------------------------\n");
	for(i = 0 ; i < DIM ; i++) {
		for (j = 0 ; j < DIM ; j++) {
			printf(" | ");
			printf("%c",tabuleiro[i][j]);		
		}
		printf(" | ");
		printf("\n -----------------------------------------\n");	 
	}
	printf("\n");
}

//Converte para um inteiro, uma coluna(que é uma letra) em posições uteis no array.
int convLetra (char letra) {
	int res = 0;
	char maisc = 'A', minus = 'a';								
	
	while (res!= 10 && (maisc != letra && minus != letra)) {					/*Enquanto a letra dada pelo utilizador, não for igual a umas das */ 			maisc++;																/*possíveis maiúsculas ou minúsculas, incrementa as Variáveis maisc e */
		minus++;																/*minus. Esta operação é feita no máximo 9 vezes,pois as letras   */ 			res++;																	/*restantes não pertencem á gama desejada*/			
	}
	
	return res;
}

//Testa(retornado um booleano) se uma dada coordenada de linha é válida depois de convertida, ou seja se inicialmente foi dada um natural entre 0 e 9.
bool testaCoordLinha (int linha) {
	bool linhaValida = FALSE;

	if(linha >= 0 && linha <= 9) {linhaValida = TRUE;}
		else {printf("Indicou uma linha inválida !!!\n");}

	return linhaValida;
}

/*Testa(retornado um booleano) se uma dada coordenada de coluna é válida, ou seja se pertence á gama desejada (no nosso caso, Matriz 10x10 , logo entre 'A' e 'J' (aceita também as respectivas minúsculas).*/
bool testaCoordColuna (char coluna) {
	bool colunaValida = FALSE;

	if((coluna >= 'A' && coluna <= 'J') || (coluna >= 'a' && coluna <= 'j'))  {colunaValida = TRUE;}
		else {printf("Indicou uma coluna inválida !!!\n");}
	
	return colunaValida;
}

/*Testa se 1 uma determinada coordenada é válida.
Função parecida com as 2 anteriores, mas sem prints e utilizada na função auxílio (função seguinte).*/
bool testaValores (int linha , int coluna) {
	bool coordsOK = FALSE;

	if(linha >= 0 && linha <= 9 && coluna >= 0 && coluna <=9) {coordsOK = TRUE;}

	return coordsOK;
}

/*Preenche com água á volta de um barco quando atingido, verificando em todas as posições á volta de uma posição do tabuleiro, e sendo válida coloca o respectivo auxílio.
Só é prestado este auxílio se o utilizador escolher menos que Normal de grau de dificuldade.*/
void auxilio (int linha, int coluna, char tabuleiro[DIM][DIM])  {
	int i, j;

	for (i = -1; i <= 1; i++)  {
		for (j = -1; j <= 1; j++)  {
			if ((tabuleiro[linha + i][coluna + j] != '!') && (testaValores(linha + i , coluna + j) == TRUE)) {
					tabuleiro[linha + i][coluna + j] = 'X';
			}
		}
	}
}



//Devido as várias tarefas desta função a descrição segue ao lado do codigo.
int avaliaTiro(char charDoTiro, int lTiro , int cTiro , char novoTabuleiro[DIM][DIM], Frota *frota, int dificuldade) {
	int i;
	int acertou = 0;													/*Acertou = 0, foi uma jogada repetida ou água. Acertou = 1, acertou num barco
																		 mas não afundou. Acertou = 2, afundou o barco. Este valor é devolvido no final
																		 da função*/
	int linha, coluna;													/*Para uma melhor compreensão definimos estas "alcunhas" que representam uma 																		 posição	no tabuleiro*/
	int idNegativo = 'A' - charDoTiro ;									/*Depois de saber qual o char que está no tabuleiro, subtrai o inteiro respectivo
																		 da tabela ASCII, e com esse valor vai comparando até descobrir que barco atingiu, 																			 ou não (água, ou barco já afundado).*/	
	
	if (novoTabuleiro[lTiro][cTiro] == ' ') {							//Verifica se uma posição já foi atingida, jogada repetida.
		novoTabuleiro[lTiro][cTiro] = 'X';								//Se não é jogada repetida prossegue a comparação, senão sai da função.
		
		switch(idNegativo) {
			case -10 :  frota->portaAvioes[0].estado++;										//Se a char do Tiro for = 'K', então acertou no Porta Aviões.
						acertou = 1;
						if (frota->portaAvioes[0].estado == 1) {							/*Se o estado é 1 foi o 1º tiro aingido e manda o */
							printf("  Acertou no Porta Aviões!\n");							/* respectivo print par ao ecra.*/
						}
				
						else {
							if (frota->portaAvioes[0].estado < frota->portaAvioes[0].capacidade) {		/*Senão se foi o 1º e ainda não fundou, avisa o */
								printf("  Voltou a atingir o Porta Aviões!\n");							/*utilizador com o respectivo print*/
							}

							else {							
								for(i = 0 ; i < frota->portaAvioes[0].capacidade ; i++) {				/*Senão se afundou o barco e põe no tabuleiro'!'*/ 
									linha = frota->portaAvioes[0].coordenadas[i][0];					/*que corresponde a ter afundado. Vai verificar*/
									coluna = frota->portaAvioes[0].coordenadas[i][1];				   /*ainda o modo de dificuldade que o utilizador*/	
									switch (dificuldade) {												/*selecionou, alterando assim a forma como os*/
										case 1 :														/*resultados são mostrados. Caso 1 e 2, Fácil e*/
										case 2 : novoTabuleiro[linha][coluna] = '!';					/*Facílimo permite o auxílio, caso 3, Normal, */ 
												 auxilio(linha, coluna, novoTabuleiro); break;			/*põe somente o barco afundado. Para Difícil e */
									   	case 3: novoTabuleiro[linha][coluna] = '!'; break;  			/* Difícilimo não revela já a posição dos barcos*/
									}																	/*afundados. O print para o ecrã é igual para */
								}																		/*todos os casos, logo vêm a seguir*/
					
								printf("  Afundou o Porta Aviões!\n");
								acertou = 2;
							}
						}
						break;
						
						//A mecânica vista acima, é semelhante para cada caso.
						
			case -9 :   frota->navio4canos[0].estado++;								//Se a char do Tiro for = 'J', então acertou no Navio de 4 Canos.
						acertou = 1;
						if (frota->navio4canos[0].estado == 1)  {								
							printf("  Acertou no Navio de 4 Canos!\n");									//Se foi o 1º tiro atingido.
						}

						else {
							if (frota->navio4canos[0].estado < frota->navio4canos[0].capacidade) {		//Se foi o 2º, ou 3º tiro atingido.
								printf("  Voltou a atingir o Navio de 4 Canos!\n");
							}
				
							else {
								for(i = 0 ; i < frota->navio4canos[0].capacidade ; i++) {				//Se afundou.
									linha = frota->navio4canos[0].coordenadas[i][0];
									coluna = frota->navio4canos[0].coordenadas[i][1];			
									switch (dificuldade) {
										case 1 :
										case 2 : novoTabuleiro[linha][coluna] = '!';					
												 auxilio(linha, coluna, novoTabuleiro); break;			//Fácil ou Facílimo.
									   	case 3: novoTabuleiro[linha][coluna] = '!'; break;  			//Modo de dificuldade Normal.
									}
								}
						
							printf("  Afundou o Navio de 4 Canos!\n");
							acertou = 2;																//Indicação de que afundou.
							}
						}
						break;
						
			case -8 :
			case -7 :	frota->navio3canos[charDoTiro-'H'].estado++;  			//Se a char do Tiro for = 'H' ou 'I', então acertou num Navio de 3 Canos.
						acertou = 1;
						if (frota->navio3canos[charDoTiro-'H'].estado == 1) {				
							printf("  Acertou num Navio de 3 Canos!\n");
						}
				
						else {
							if (frota->navio3canos[charDoTiro-'H'].estado < frota->navio3canos[0].capacidade) {
								printf("  Voltou a atingir um Navio de 3 Canos!\n");				
							}
					
				    		else {
								for(i = 0 ; i < frota->navio3canos[0].capacidade ; i++) {
									linha = frota->navio3canos[charDoTiro-'H'].coordenadas[i][0];
									coluna = frota->navio3canos[charDoTiro-'H'].coordenadas[i][1];	
									switch (dificuldade) {
										case 1 :
										case 2 : novoTabuleiro[linha][coluna] = '!';					
												 auxilio(linha, coluna, novoTabuleiro); break;
									   	case 3: novoTabuleiro[linha][coluna] = '!'; break;  			
									}				
								}
						
								printf("  Afundou um Navio de 3 Canos!\n");
								acertou = 2;	
							}
						}
						break;
						
			case -6 : 
			case -5 : 
			case -4 : 	frota->navio2canos[charDoTiro-'E'].estado++;	//Se a char do Tiro estiver entre  = 'E' e 'G', então acertou num Navio de 2 Canos.
						acertou = 1;
						if (frota->navio2canos[charDoTiro-'E'].estado == 1) {						
							printf("  Acertou num Navio de 2 Canos!\n");
						}
			
						else {
							for(i = 0 ; i < frota->navio2canos[0].capacidade ; i++) {
								linha = frota->navio2canos[charDoTiro-'E'].coordenadas[i][0];
								coluna = frota->navio2canos[charDoTiro-'E'].coordenadas[i][1];
								switch (dificuldade) {
										case 1 :
										case 2 : novoTabuleiro[linha][coluna] = '!';					
												 auxilio(linha, coluna, novoTabuleiro); break;
									   	case 3: novoTabuleiro[linha][coluna] = '!'; break;  			
									}
							}
					
							printf("  Afundou um Navio de 2 Canos!\n");
							acertou = 2;
						}
						break;

			case -3 :
			case -2 : 
			case -1 :
			case 0  :   frota->submarino[charDoTiro-'A'].estado++;			 	//Se a char do Tiro estiver entre  = 'A' e 'D', então afundou um submarino.
						printf("  Afundou um Submarino!\n");
						switch (dificuldade) {
							case 1 :									 
							case 2 : novoTabuleiro[lTiro][cTiro] = '!';					
									 auxilio(lTiro, cTiro, novoTabuleiro); break; 
						   	case 3:  novoTabuleiro[lTiro][cTiro] = '!'; break;  			
						}
						acertou = 2;
						break;
		}
	}		

	return acertou;
}

/*Com o resultado de uma rajada, verifica se acertou tudo na água(senão, é utilizado os prints da função de cima), se foi um tiro atingido mas que não afundou o barco ou se afundou o barco. No caso de afundar incrementa o afundou sendo depois devolvido pela função,  que ao ser igual ao total de Barcos na frota corresponde a ter afundado a frota toda.*/
int nAfundados (int acertou_T1, int acertou_T2, int acertou_T3) {
	int totalAcertados, afundou = 0;
	
	totalAcertados = acertou_T1 + acertou_T2 + acertou_T3;
	if (totalAcertados == 0) {printf("  Acertou tudo na água!\n");}
	else {	
		  if (acertou_T1 > 1) {afundou++;}
		  if (acertou_T2 > 1) {afundou++;}
		  if (acertou_T3 > 1) {afundou++;}
	}

	return afundou;
}


