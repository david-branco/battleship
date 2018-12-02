/*
**TABULEIRO INSERIDO PELO UTILIZADOR
*/

int frotaUtilizador (Frota *frota) {

	int i, j;
	
	//Variáveis onde vão ser guardadas as coordenadas dadas pelo utilizador.
	int s1l, s1c, s2l, s2c, s3l, s3c, s4l, s4c, n2c1l1, n2c1c1, n2c1l2, n2c1c2, n2c2l1, 					//variável que guarda as linhas
	    n2c2c1, n2c2l2, n2c2c2, n2c3l1, n2c3c1, n2c3l2, n2c3c2, n3c1l1, n3c1c1, n3c1l2, 					
	    n3c1c2,n3c1l3, n3c1c3, n3c2l1, n3c2c1, n3c2l2, n3c2c2, n3c2l3, n3c2c3, n4cl1,
	    n4cc1, n4cl2, n4cc2,n4cl3, n4cc3, n4cl4, n4cc4, pal1, pac1, pal2, pac2, pal3, pac3, pal4, pac4, pal5, pac5;

	char letra_s1c, letra_s2c, letra_s3c, letra_s4c, letra_n2c1c1, letra_n2c1c2,    						//variável que guarda as colunas
	     letra_n2c2c1, letra_n2c2c2, letra_n2c3c1, letra_n2c3c2, letra_n3c1c1, 
	     letra_n3c1c2, letra_n3c1c3, letra_n3c2c1, letra_n3c2c2, letra_n3c2c3, 
	     letra_n4cc1, letra_n4cc2, letra_n4cc3, letra_n4cc4, letra_pac1, letra_pac2, letra_pac3, letra_pac4, letra_pac5; 

	bool coordsOK = FALSE, colunaValida = FALSE, linhaValida = FALSE;					//Booleanos para verificar as coordenadas dadas pelo utilizador.
	char tabuleiro[DIM][DIM],

	tabuleiroVazio[DIM][DIM] = {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},					/*Tabuleiro Vazio, onde vão ser marcados os barcos  nas   */
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},				 	/*posições dadas pelo utilizador.  	               		  */
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},					
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
								{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
								
								
	//Frota a ser preenchida pelo utilizador.
	Submarino Submarino_1 = {'A', 1, 0,{{s1l,s1c}}},
  			  Submarino_2 = {'B', 1, 0,{{s2l,s2c}}},
  			  Submarino_3 = {'C', 1, 0,{{s3l,s3c}}},
  			  Submarino_4 = {'D', 1, 0,{{s4l,s4c}}};
	Navio2Canos Navio2canos_1 = {'E', 2, 0,{{n2c1l1,n2c1c1},{n2c1l2,n2c1c2}}},
		        Navio2canos_2 = {'F', 2, 0,{{n2c2l1,n2c2c1},{n2c2l2,n2c2c2}}},
		        Navio2canos_3 = {'G', 2, 0,{{n2c3l1,n2c3c1},{n2c3l2,n2c3c2}}};
	Navio3Canos Navio3canos_1 = {'H', 3, 0,{{n3c1l1,n3c1c1},{n3c1l2,n3c1c2},{n3c1l3,n3c1c3}}},
		        Navio3canos_2 = {'I', 3, 0,{{n3c2l1,n3c2c1},{n3c2l2,n3c2c2},{n3c2l3,n3c2c3}}};
	Navio4Canos Navio4canos = {'J', 4, 0,{{n4cl1,n4cc1},{n4cl2,n4cc2},{n4cl3,n4cc3},{n4cl4,n4cc4}}};
	PortaAvioes PortaAvioes = {'K', 5, 0,{{pal1,pac1},{pal2,pac2},{pal3,pac3},{pal4,pac4},{pal5,pac5}}};

	Frota frotaUser = {11, {Submarino_1 , Submarino_2 , Submarino_3 , Submarino_4} , {Navio2canos_1 , Navio2canos_2 , Navio2canos_3} , {Navio3canos_1 , Navio3canos_2} , {Navio4canos} , {PortaAvioes}, tabuleiro[DIM][DIM]};


	printf("\n Introduza para coluna uma letra de A até J(maiuscula ou minuscula) e \n para linha um natural de 1 até 10.\n\n");
	
	/*Segue-se vários blocos onde vão ser pedidas e guardadas coordenadas ao utilizador, sendo verificadas.
	Se forem válidas serão mais tarde preenchidas no tabuleiro, com  caracter correspondente.*/
	
	//Bloco para o Porta Aviões.
	printf("Coordenadas para o Porta Aviões:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_pac1); getBarraN;						
		pac1 = convLetra(letra_pac1);
		printf("Linha: "); scanf("%d",&pal1); getBarraN;
		pal1--;
		
		colunaValida = testaCoordColuna (letra_pac1);
		linhaValida = testaCoordLinha (pal1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_pac2); getBarraN;
		pac2 = convLetra(letra_pac2);
		printf("Linha: "); scanf("%d",&pal2); getBarraN;
		pal2--;
		
		colunaValida = testaCoordColuna (letra_pac2);
		linhaValida = testaCoordLinha (pal2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("3ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_pac3); getBarraN;
		pac3 = convLetra(letra_pac3);
		printf("Linha: "); scanf("%d",&pal3); getBarraN;
		pal3--;
				
		colunaValida = testaCoordColuna (letra_pac3);
		linhaValida = testaCoordLinha (pal3);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("4ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_pac4); getBarraN;
		pac4 = convLetra(letra_pac4);
		printf("Linha: "); scanf("%d",&pal4); getBarraN;
		pal4--;
				
		colunaValida = testaCoordColuna (letra_pac4);
		linhaValida = testaCoordLinha (pal4);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("5ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_pac5); getBarraN;
		pac5 = convLetra(letra_pac5);
		printf("Linha: "); scanf("%d",&pal5); getBarraN;
		pal5--;
				
		colunaValida = testaCoordColuna (letra_pac5);
		linhaValida = testaCoordLinha (pal5);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;
	
	system ("clear");
	tabuleiroVazio[pal1][pac1] = 'K';
	tabuleiroVazio[pal2][pac2] = 'K';
	tabuleiroVazio[pal3][pac3] = 'K';
	tabuleiroVazio[pal4][pac4] = 'K';
	tabuleiroVazio[pal5][pac5] = 'K';
	mostraTabuleiro(tabuleiroVazio);
	

	//Bloco para o Navio de 4 Canos.
	printf("Coordenadas para o Navio de 4 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n4cc1); getBarraN;
		n4cc1 = convLetra(letra_n4cc1);
		printf("Linha: "); scanf("%d",&n4cl1); getBarraN;
		n4cl1--;
				
		colunaValida = testaCoordColuna (letra_n4cc1);
		linhaValida = testaCoordLinha (n4cl1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n4cc2); getBarraN;
		n4cc2 = convLetra(letra_n4cc2);
		printf("Linha: "); scanf("%d",&n4cl2); getBarraN;
		n4cl2--;
						
		colunaValida = testaCoordColuna (letra_n4cc2);
		linhaValida = testaCoordLinha (n4cl2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("3ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n4cc3); getBarraN;
		n4cc3 = convLetra(letra_n4cc3);
		printf("Linha: "); scanf("%d",&n4cl3); getBarraN;
		n4cl3--;
						
		colunaValida = testaCoordColuna (letra_n4cc3);
		linhaValida = testaCoordLinha (n4cl3);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("4ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n4cc4); getBarraN;
		n4cc4 = convLetra(letra_n4cc4);
		printf("Linha: "); scanf("%d",&n4cl4); getBarraN;
		n4cl4--;
						
		colunaValida = testaCoordColuna (letra_n4cc4);
		linhaValida = testaCoordLinha (n4cl4);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n4cl1][n4cc1] = 'J';
	tabuleiroVazio[n4cl2][n4cc2] = 'J';
	tabuleiroVazio[n4cl3][n4cc3] = 'J';
	tabuleiroVazio[n4cl4][n4cc4] = 'J';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para um Navio de 3 Canos.
	printf("Coordenadas para o primeiro Navio de 3 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c1c1); getBarraN;
		n3c1c1 = convLetra(letra_n3c1c1);
		printf("Linha: "); scanf("%d",&n3c1l1); getBarraN;
		n3c1l1--;
						
		colunaValida = testaCoordColuna (letra_n3c1c1);
		linhaValida = testaCoordLinha (n3c1l1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c1c2); getBarraN;
		n3c1c2 = convLetra(letra_n3c1c2);
		printf("Linha: "); scanf("%d",&n3c1l2); getBarraN;
		n3c1l2--;
								
		colunaValida = testaCoordColuna (letra_n3c1c2);
		linhaValida = testaCoordLinha (n3c1l2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("3ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c1c3); getBarraN;
		n3c1c3 = convLetra(letra_n3c1c3);
		printf("Linha: "); scanf("%d",&n3c1l3); getBarraN;
		n3c1l3--;
										
		colunaValida = testaCoordColuna (letra_n3c1c3);
		linhaValida = testaCoordLinha (n3c1l3);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n3c1l1][n3c1c1] = 'H';
	tabuleiroVazio[n3c1l2][n3c1c2] = 'H';
	tabuleiroVazio[n3c1l3][n3c1c3] = 'H';
	mostraTabuleiro(tabuleiroVazio);


	//Bloco para outro Navio de 3 Canos.
	printf("Coordenadas para o segundo Navio de 3 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c2c1); getBarraN;
		n3c2c1 = convLetra(letra_n3c2c1);
		printf("Linha: "); scanf("%d",&n3c2l1); getBarraN;
		n3c2l1--;
										
		colunaValida = testaCoordColuna (letra_n3c2c1);
		linhaValida = testaCoordLinha (n3c2l1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c2c2); getBarraN;
		n3c2c2 = convLetra(letra_n3c2c2);
		printf("Linha: "); scanf("%d",&n3c2l2); getBarraN;
		n3c2l2--;
								
		colunaValida = testaCoordColuna (letra_n3c2c2);
		linhaValida = testaCoordLinha (n3c2l2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("3ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n3c2c3); getBarraN;
		n3c2c3 = convLetra(letra_n3c2c3);
		printf("Linha: "); scanf("%d",&n3c2l3); getBarraN;
		n3c2l3--;
										
		colunaValida = testaCoordColuna (letra_n3c2c3);
		linhaValida = testaCoordLinha (n3c2l3);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n3c2l1][n3c2c1] = 'I';
	tabuleiroVazio[n3c2l2][n3c2c2] = 'I';
	tabuleiroVazio[n3c2l3][n3c2c3] = 'I';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o primeiro navio de 2 Canos.
	printf("Coordenadas para o primeiro Navio de 2 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n2c1c1); getBarraN;
		n2c1c1 = convLetra(letra_n2c1c1);
		printf("Linha: "); scanf("%d",&n2c1l1); getBarraN;
		n2c1l1--;
										
		colunaValida = testaCoordColuna (letra_n2c1c1);
		linhaValida = testaCoordLinha (n2c1l1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;
	
	printf("2ª Coordenada\n");
	while(coordsOK == FALSE) {
		printf("Coluna: "); scanf(" %c",&letra_n2c1c2); getBarraN;
		n2c1c2 = convLetra(letra_n2c1c2);
		printf("Linha: "); scanf("%d",&n2c1l2); getBarraN;
		n2c1l2--;
										
		colunaValida = testaCoordColuna (letra_n2c1c2);
		linhaValida = testaCoordLinha (n2c1l2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n2c1l1][n2c1c1] = 'E';
	tabuleiroVazio[n2c1l2][n2c1c2] = 'E';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o segundo navio de 2 Canos.
	printf("Coordenadas para o segundo Navio de 2 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n2c2c1); getBarraN;
		n2c2c1 = convLetra(letra_n2c2c1);
		printf("Linha: "); scanf("%d",&n2c2l1); getBarraN;
		n2c2l1--;
												
		colunaValida = testaCoordColuna (letra_n2c2c1);
		linhaValida = testaCoordLinha (n2c2l1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n2c2c2); getBarraN;
		n2c2c2 = convLetra(letra_n2c2c2);
		printf("Linha: "); scanf("%d",&n2c2l2); getBarraN;
		n2c2l2--;
												
		colunaValida = testaCoordColuna (letra_n2c2c2);
		linhaValida = testaCoordLinha (n2c2l2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n2c2l1][n2c2c1] = 'F';
	tabuleiroVazio[n2c2l2][n2c2c2] = 'F';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o terceiro navio de 2 Canos.
	printf("Coordenadas para o terceiro Navio de 2 Canos:\n");
	while(coordsOK == FALSE) {
		printf("1ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n2c3c1); getBarraN;
		n2c3c1 = convLetra(letra_n2c3c1);
		printf("Linha: "); scanf("%d",&n2c3l1); getBarraN;
		n2c3l1--;
												
		colunaValida = testaCoordColuna (letra_n2c3c1);
		linhaValida = testaCoordLinha (n2c3l1);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	while(coordsOK == FALSE) {
		printf("2ª Coordenada\n");
		printf("Coluna: "); scanf(" %c",&letra_n2c3c2); getBarraN;
		n2c3c2 = convLetra(letra_n2c3c2);
		printf("Linha: "); scanf("%d",&n2c3l2); getBarraN;
		n2c3l2--;
												
		colunaValida = testaCoordColuna (letra_n2c3c2);
		linhaValida = testaCoordLinha (n2c3l2);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[n2c3l1][n2c3c1] = 'G';
	tabuleiroVazio[n2c3l2][n2c3c2] = 'G';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o primeiro Submarino.
	printf("Coordenada para o primeiro Submarino:\n");
	while(coordsOK == FALSE) {
		printf("Coluna: "); scanf(" %c",&letra_s1c); getBarraN;
		s1c = convLetra(letra_s1c);
		printf("Linha: "); scanf("%d",&s1l); getBarraN;
		s1l--;
										
		colunaValida = testaCoordColuna (letra_s1c);
		linhaValida = testaCoordLinha (s1l);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[s1l][s1c] = 'A';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o segundo Submarino.
	printf("Coordenada para o segundo Submarino:\n");
	while(coordsOK == FALSE) {
		printf("Coluna: "); scanf(" %c",&letra_s2c); getBarraN;
		s2c = convLetra(letra_s2c);
		printf("Linha: "); scanf("%d",&s2l); getBarraN;
		s2l--;
										
		colunaValida = testaCoordColuna (letra_s2c);
		linhaValida = testaCoordLinha (s2l);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[s2l][s2c] = 'B';
	mostraTabuleiro(tabuleiroVazio);
	
	
	//Bloco para o terceiro Submarino.
	printf("Coordenada para o terceiro Submarino:\n");
	while(coordsOK == FALSE) {
		printf("Coluna: "); scanf(" %c",&letra_s3c); getBarraN;
		s3c = convLetra(letra_s3c);
		printf("Linha: "); scanf("%d",&s3l); getBarraN;
		s3l--;
												
		colunaValida = testaCoordColuna (letra_s3c);
		linhaValida = testaCoordLinha (s3l);
		coordsOK = (colunaValida && linhaValida);
	}
	coordsOK = FALSE;

	system ("clear");
	tabuleiroVazio[s3l][s3c] = 'C';
	mostraTabuleiro(tabuleiroVazio);
	
	//Bloco para o  quarto Submarino
	printf("Coordenada para o quarto Submarino:\n");
	while(coordsOK == FALSE) {
		printf("Coluna: "); scanf(" %c",&letra_s4c); getBarraN;
		s4c = convLetra(letra_s4c);
		printf("Linha: "); scanf("%d",&s4l); getBarraN;
		s4l--;
												
		colunaValida = testaCoordColuna (letra_s4c);
		linhaValida = testaCoordLinha (s4l);
		coordsOK = (colunaValida && linhaValida);
	}
	//Acaba aqui o preenchimento por parte do utilizador.
	
	//Copiar o tabuleiro preenchido, para o tabuleiro da frota, preenchendo com '0' (Água) nas posições que ficaram vazias.
	tabuleiroVazio[s4l][s4c] = 'D';	
	mostraTabuleiro(tabuleiroVazio);

	for(i = 0 ; i < DIM ; i++)  {
		for(j = 0; j < DIM ; j++)  {
			if (tabuleiroVazio[i][j] == ' ') {
				tabuleiroVazio[i][j] = '0';
			}
			frotaUser.tabuleiro[i][j] = tabuleiroVazio[i][j];
		}
	} 

	
	//Copia esta frota, para o bloco de memória da passada como parâmetro na função.
	memcpy(frota , &frotaUser, sizeof(Frota));
	
	return 1;
}


