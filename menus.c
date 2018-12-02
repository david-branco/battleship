/*
**MENUS
*/

//Menu Inicial
void menu() {
  printf("\n****************************************************************\n");
  printf("********************* BATALHA NAVAL ****************************\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
  printf("**                        MENU                      ************\n");
  printf("**                                                  ************\n");
  printf("**| 1|      Jogar                                   |***********\n");
  printf("**| 2|      Definir numero de tentativas            |***********\n");
  printf("**| 3|      Definir dificuldade                     |***********\n");
  printf("**| 4|      Introduzir tabuleiro de jogo            |***********\n");
  printf("**| 5|      Escolher tabuleiro aleatorio            |***********\n");
  printf("**| 6|      Sair                                    |***********\n");
  printf("**|                                                 |***********\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
}

//Menu que permite ao utilizador escolher a dificuldade desejada.
int escolherDificuldade() {
	int opcao, dificuldade;

  printf("\n****************************************************************\n");
  printf("********************* BATALHA NAVAL ****************************\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
  printf("**                 ESCOLHER DIFICULDADE             ************\n");
  printf("**                                                  ************\n");
  printf("**| 1|      Facílimo                                |***********\n");
  printf("**| 2|      Fácil                                   |***********\n");
  printf("**| 3|      Normal                                  |***********\n");
  printf("**| 4|      Difícil                                 |***********\n");
  printf("**| 5|      Difícilimo                              |***********\n");
  printf("**| 6|      Informações                             |***********\n");
  printf("**| 7|      Retornar para o Menu                    |***********\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");


		printf("Dificuldade pretendida: "); scanf("%d",&opcao);
		system ("clear");
		
		switch (opcao) {
			case 1 : dificuldade = 1; printf("\n\n\tDificuldade alterada para Facílimo !!\n\n"); break;
			case 2 : dificuldade = 2; printf("\n\n\tDificuldade alterada para Fácil !!\n\n"); break;
			case 3 : dificuldade = 3; printf("\n\n\tDificuldade alterada para Normal !!\n\n"); break;
			case 4 : dificuldade = 4; printf("\n\n\tDificuldade alterada para Difícil !!\n\n"); break;
			case 5 : dificuldade = 5; printf("\n\n\tDificuldade alterada para Difícilimo !!\n\n"); break;
			case 6 : system ("clear"); menuInfo(); escolherDificuldade(); break;
			case 7 : break;
			
		}
	
	return dificuldade;
}

//Menu auxiliar ao anterior , indicando as caracteristicas de cada modo de dificuldade.
int menuInfo() {

  printf("\n****************************************************************\n");
  printf("********************* BATALHA NAVAL ****************************\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
  printf("**                 INFORMAÇÔES                        **********\n");
  printf("**| Facílimo: 25 jogadas disponiveis, e o auxilio do  |*********\n");
  printf("**| preenchimento no tabuleiro de água á volta de um  |*********\n");
  printf("**| barco afundado.                                   |*********\n");
  printf("**| Fácil: 17 jogadas disponiveis e o mesmo auxilio.  |*********\n");
  printf("**| Normal: 17 jogadas disponiveis, sem auxilio.      |*********\n");
  printf("**| Díficil: 17 jogadas, e um barco afundado só se    |*********\n");
  printf("**| revela quando a frota toda afundar.               |*********\n");
  printf("**| Díficilimo: 13 jogadas,mesmo sistema de tabuleiro.|*********\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
  
  getBarraN;
  printf("Prima enter para voltar ao menu anterior..."); 
  getBarraN;
  system ("clear");
  

}

//Menu informativo antes do utilizador introduzir o seu tabuleiro.
void menuUser() {

  printf("\n****************************************************************\n");
  printf("********************* BATALHA NAVAL ****************************\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");
  printf("**                 INFORMAÇÃO                       ************\n");
  printf("**|  De seguida será necessario que o seu adversário|***********\n");
  printf("**| introduza coordenadas para uma frota inimiga ,  |***********\n");
  printf("**| constituida por 1 Porta Aviões , 1 Navio de 4   |***********\n");
  printf("**| Canos , 2 Navio de 3 Canos , 3 Navio de 2 Canos |***********\n");
  printf("**| e 4 Submarinos. Foi assumido que ele está       |***********\n");
  printf("**| familiarizado com as regras da Batalha Naval,   |***********\n");
  printf("**| especificamente como preencher correctamente o  |***********\n");
  printf("**| tabuleiro de jogo.                              |***********\n");
  printf("****************************************************************\n");
  printf("****************************************************************\n");

}


