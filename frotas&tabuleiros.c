/*
**FROTAS E RESPECTIVOS TABULEIROS
*/

//Seleciona uma frota predefinida ou aleatória, e respectivo tabuleiro.
void selecionaFrota(Frota *frota , int n) {

	char tabuleiro_0[DIM][DIM]; 	

	//Frota predefinida.							  
	Submarino submarino1_F0 = {'A', 1, 0,{{1,7}}},
  			  submarino2_F0 = {'B', 1, 0,{{5,9}}},
  			  submarino3_F0 = {'C', 1, 0,{{9,9}}},
  			  submarino4_F0 = {'D', 1, 0,{{8,4}}};
	Navio2Canos navio2canos1_F0 = {'E', 2, 0,{{3,7},{3,8}}},
		        navio2canos2_F0 = {'F', 2, 0,{{6,7},{7,7}}},
		        navio2canos3_F0 = {'G', 2, 0,{{8,1},{8,2}}};
	Navio3Canos navio3canos1_F0 = {'H', 3, 0,{{1,1},{1,2},{1,3}}},
     	  	    navio3canos2_F0 = {'I', 3, 0,{{0,5},{1,5},{2,5}}};
	Navio4Canos navio4canos_F0 = {'J', 4, 0,{{3,1},{4,1},{5,1},{6,1}}};
	PortaAvioes portaAvioes_F0 = {'K', 5, 0,{{4,3},{4,4},{4,5},{5,4},{6,4}}};

	Frota frota_0 = {11, {submarino1_F0, submarino2_F0, submarino3_F0, submarino4_F0} , {navio2canos1_F0, navio2canos2_F0, navio2canos3_F0 } , {navio3canos1_F0, navio3canos2_F0} , {navio4canos_F0} , {portaAvioes_F0}, tabuleiro_0[DIM][DIM]};

	//Outras 10 hipoteses para frotas, se o utilizador decidir ser escolha aleatória
	char tabuleiro_1[DIM][DIM], tabuleiro_2[DIM][DIM], tabuleiro_3[DIM][DIM], tabuleiro_4[DIM][DIM], tabuleiro_5[DIM][DIM], tabuleiro_6[DIM][DIM], tabuleiro_7[DIM][DIM], tabuleiro_8[DIM][DIM], tabuleiro_9[DIM][DIM], tabuleiro_10[DIM][DIM]; 	
								  
								  
	Submarino submarino1_F1 = {'A', 1, 0,{{3,2}}},
  			  submarino2_F1 = {'B', 1, 0,{{7,2}}},
  			  submarino3_F1 = {'C', 1, 0,{{9,3}}},
  			  submarino4_F1 = {'D', 1, 0,{{3,8}}};
	Navio2Canos navio2canos1_F1 = {'E', 2, 0,{{8,0},{9,0}}},
     	  	    navio2canos2_F1 = {'F', 2, 0,{{1,5},{2,5}}},
     	  	    navio2canos3_F1 = {'G', 2, 0,{{1,7},{1,8}}};
	Navio3Canos navio3canos1_F1 = {'H', 3, 0,{{5,1},{5,2},{5,3}}},
     	  	    navio3canos2_F1 = {'I', 3, 0,{{5,6},{5,7},{5,8}}};
	Navio4Canos navio4canos_F1 = {'J', 4, 0,{{8,5},{8,6},{8,7},{8,8}}};
	PortaAvioes portaAvioes_F1 = {'K', 5, 0,{{0,0},{1,0},{2,0},{1,1},{1,2}}};
	
	Frota frota_1 = {11, {submarino1_F1, submarino2_F1, submarino3_F1, submarino4_F1} , {navio2canos1_F1, navio2canos2_F1, navio2canos3_F1} , {navio3canos1_F1, navio3canos2_F1}, {navio4canos_F1}, {portaAvioes_F1}, tabuleiro_1[DIM][DIM]};


	Submarino submarino1_F2 = {'A', 1, 0,{{2,7}}},
  			  submarino2_F2 = {'B', 1, 0,{{0,0}}},
  			  submarino3_F2 = {'C', 1, 0,{{0,4}}},
  			  submarino4_F2 = {'D', 1, 0,{{2,2}}};
	Navio2Canos navio2canos1_F2 = {'E', 2, 0,{{8,5},{9,5}}},
     	  	    navio2canos2_F2 = {'F', 2, 0,{{5,7},{6,7}}},
     	  	    navio2canos3_F2 = {'G', 2, 0,{{0,9},{1,9}}};
	Navio3Canos navio3canos1_F2 = {'H', 3, 0,{{8,7},{8,8},{8,9}}},
     	  	    navio3canos2_F2 = {'I', 3, 0,{{7,1},{7,2},{7,3}}};
	Navio4Canos navio4canos_F2 = {'J', 4, 0,{{2,0},{3,0},{4,0},{5,0}}};
	PortaAvioes portaAvioes_F2 = {'K', 5, 0,{{3,4},{4,4},{5,3},{5,4},{5,5}}};
	
		Frota frota_2 = {11, {submarino1_F2, submarino2_F2, submarino3_F2, submarino4_F2} , {navio2canos1_F2, navio2canos2_F2, navio2canos3_F2} , {navio3canos1_F2, navio3canos2_F2} , {navio4canos_F2} , {portaAvioes_F2}, tabuleiro_2[DIM][DIM]};
	
	
	Submarino submarino1_F3 = {'A', 1, 0,{{3,1}}},
  			  submarino2_F3 = {'B', 1, 0,{{3,3}}},
  			  submarino3_F3 = {'C', 1, 0,{{3,5}}},
  			  submarino4_F3 = {'D', 1, 0,{{3,7}}};
	Navio2Canos navio2canos1_F3 = {'E', 2, 0,{{0,8},{0,9}}},
     	  	    navio2canos2_F3 = {'F', 2, 0,{{5,0},{6,0}}},
     	  	    navio2canos3_F3 = {'G', 2, 0,{{0,0},{0,1}}};
	Navio3Canos navio3canos1_F3 = {'H', 3, 0,{{5,7},{5,8},{5,9}}},
     	  	    navio3canos2_F3 = {'I', 3, 0,{{8,1},{8,2},{8,3}}};
	Navio4Canos navio4canos_F3 = {'J', 4, 0,{{6,5},{7,5},{8,5},{9,5}}};
	PortaAvioes portaAvioes_F3 = {'K', 5, 0,{{7,8},{8,8},{9,7},{9,8},{9,9}}};
	
	Frota frota_3 = {11, {submarino1_F3, submarino2_F3, submarino3_F3, submarino4_F3} , {navio2canos1_F3, navio2canos2_F3, navio2canos3_F3} , {navio3canos1_F3, navio3canos2_F3} , {navio4canos_F3} , {portaAvioes_F3}, tabuleiro_3[DIM][DIM]};
	
	
	Submarino submarino1_F4 = {'A', 1, 0,{{9,0}}},
  			  submarino2_F4 = {'B', 1, 0,{{7,0}}},
  			  submarino3_F4 = {'C', 1, 0,{{0,9}}},
  			  submarino4_F4 = {'D', 1, 0,{{2,9}}};
	Navio2Canos navio2canos1_F4 = {'E', 2, 0,{{4,4},{4,5}}},
     	  	    navio2canos2_F4 = {'F', 2, 0,{{6,4},{6,5}}},
     	  	    navio2canos3_F4 = {'G', 2, 0,{{8,4},{8,5}}};
	Navio3Canos navio3canos1_F4 = {'H', 3, 0,{{5,9},{6,9},{7,9}}},
     	  	    navio3canos2_F4 = {'I', 3, 0,{{4,0},{4,1},{4,2}}};
	Navio4Canos navio4canos_F4 = {'J', 4, 0,{{4,7},{5,7},{6,7},{7,7}}};
	PortaAvioes portaAvioes_F4 = {'K', 5, 0,{{0,1},{1,1},{2,0},{2,1},{2,2}}};

	Frota frota_4 = {11, {submarino1_F4, submarino2_F4, submarino3_F4, submarino4_F4} , {navio2canos1_F4, navio2canos2_F4, navio2canos3_F4} , {navio3canos1_F4, navio3canos2_F4} , {navio4canos_F4} , {portaAvioes_F4}, tabuleiro_4[DIM][DIM]};
	
	
	Submarino submarino1_F5 = {'A', 1, 0,{{5,4}}},
  			  submarino2_F5 = {'B', 1, 0,{{0,9}}},
  			  submarino3_F5 = {'C', 1, 0,{{9,0}}},
  			  submarino4_F5 = {'D', 1, 0,{{9,2}}};
	Navio2Canos navio2canos1_F5 = {'E', 2, 0,{{0,0},{0,1}}},
     	  	    navio2canos2_F5 = {'F', 2, 0,{{2,9},{3,9}}},
     	  	    navio2canos3_F5 = {'G', 2, 0,{{2,1},{3,1}}};
	Navio3Canos navio3canos1_F5 = {'H', 3, 0,{{0,4},{0,5},{0,6}}},
     	  	    navio3canos2_F5 = {'I', 3, 0,{{2,4},{2,5},{2,6}}};
	Navio4Canos navio4canos_F5 = {'J', 4, 0,{{5,6},{5,7},{5,8},{5,9}}};
	PortaAvioes portaAvioes_F5 = {'K', 5, 0,{{7,7},{8,7},{8,8},{8,9},{9,7}}};
	
	Frota frota_5 = {11, {submarino1_F5, submarino2_F5, submarino3_F5, submarino4_F5} , {navio2canos1_F5, navio2canos2_F5, navio2canos3_F5} , {navio3canos1_F5, navio3canos2_F5}, {navio4canos_F5}, {portaAvioes_F5}, tabuleiro_5[DIM][DIM]};
	
	
	Submarino submarino1_F6 = {'A', 1, 0,{{0,0}}},
  			  submarino2_F6 = {'B', 1, 0,{{0,9}}},
  			  submarino3_F6 = {'C', 1, 0,{{9,0}}},
  			  submarino4_F6 = {'D', 1, 0,{{9,9}}};
	Navio2Canos navio2canos1_F6 = {'E', 2, 0,{{6,0},{7,0}}},
     	  	    navio2canos2_F6 = {'F', 2, 0,{{3,0},{4,0}}},
     	  	    navio2canos3_F6 = {'G', 2, 0,{{2,9},{3,9}}};
	Navio3Canos navio3canos1_F6 = {'H', 3, 0,{{5,9},{6,9},{7,9}}},
     	  	    navio3canos2_F6 = {'I', 3, 0,{{9,2},{9,3},{9,4}}};
	Navio4Canos navio4canos_F6 = {'J', 4, 0,{{0,2},{0,3},{0,4},{0,5}}};
	PortaAvioes portaAvioes_F6 = {'K', 5, 0,{{3,4},{4,4},{5,3},{5,4},{5,5}}};
	
	Frota frota_6 = {11, {submarino1_F6, submarino2_F6, submarino3_F6, submarino4_F6} , {navio2canos1_F6, navio2canos2_F6, navio2canos3_F6} , {navio3canos1_F6, navio3canos2_F6}, {navio4canos_F6}, {portaAvioes_F6}, tabuleiro_6[DIM][DIM]};
	
	
	Submarino submarino1_F7 = {'A', 1, 0,{{1,0}}},
  			  submarino2_F7 = {'B', 1, 0,{{0,2}}},
  			  submarino3_F7 = {'C', 1, 0,{{1,4}}},
  			  submarino4_F7 = {'D', 1, 0,{{0,6}}};
	Navio2Canos navio2canos1_F7 = {'E', 2, 0,{{1,8},{1,9}}},
     	  	    navio2canos2_F7 = {'F', 2, 0,{{9,8},{9,9}}},
     	  	    navio2canos3_F7 = {'G', 2, 0,{{3,0},{4,0}}};
	Navio3Canos navio3canos1_F7 = {'H', 3, 0,{{3,7},{3,8},{3,9}}},
     	  	    navio3canos2_F7 = {'I', 3, 0,{{5,9},{6,9},{7,9}}};
	Navio4Canos navio4canos_F7 = {'J', 4, 0,{{6,0},{7,0},{8,0},{9,0}}};
	PortaAvioes portaAvioes_F7 = {'K', 5, 0,{{7,3},{7,4},{7,5},{8,4},{9,4}}};
	
	Frota frota_7 = {11, {submarino1_F7, submarino2_F7, submarino3_F7, submarino4_F7} , {navio2canos1_F7, navio2canos2_F7, navio2canos3_F7} , {navio3canos1_F7, navio3canos2_F7}, {navio4canos_F7}, {portaAvioes_F7}, tabuleiro_7[DIM][DIM]}; 
	
	
	Submarino submarino1_F8 = {'A', 1, 0,{{7,2}}},
  			  submarino2_F8 = {'B', 1, 0,{{9,0}}},
  			  submarino3_F8 = {'C', 1, 0,{{5,4}}},
  			  submarino4_F8 = {'D', 1, 0,{{3,6}}};
	Navio2Canos navio2canos1_F8 = {'E', 2, 0,{{0,8},{1,8}}},
     	  	    navio2canos2_F8 = {'F', 2, 0,{{0,6},{1,6}}},
     	  	    navio2canos3_F8 = {'G', 2, 0,{{0,0},{0,1}}};
	Navio3Canos navio3canos1_F8 = {'H', 3, 0,{{0,3},{1,3},{2,3}}},
     	  	    navio3canos2_F8 = {'I', 3, 0,{{4,0},{4,1},{4,2}}};
	Navio4Canos navio4canos_F8 = {'J', 4, 0,{{3,9},{4,9},{5,9},{6,9}}};
	PortaAvioes portaAvioes_F8 = {'K', 5, 0,{{7,5},{8,5},{8,6},{8,7},{9,5}}};
	
	Frota frota_8 = {11, {submarino1_F8, submarino2_F8, submarino3_F8, submarino4_F8} , {navio2canos1_F8, navio2canos2_F8, navio2canos3_F8} , {navio3canos1_F8, navio3canos2_F8}, {navio4canos_F8}, {portaAvioes_F8}, tabuleiro_8[DIM][DIM]};
	
	
	Submarino submarino1_F9 = {'A', 1, 0,{{4,0}}},
  			  submarino2_F9 = {'B', 1, 0,{{2,1}}},
  			  submarino3_F9 = {'C', 1, 0,{{4,2}}},
  			  submarino4_F9 = {'D', 1, 0,{{2,3}}};
	Navio2Canos navio2canos1_F9 = {'E', 2, 0,{{4,4},{5,4}}},
     	  	    navio2canos2_F9 = {'F', 2, 0,{{1,5},{2,5}}},
     	  	    navio2canos3_F9 = {'G', 2, 0,{{4,6},{5,6}}};
	Navio3Canos navio3canos1_F9 = {'H', 3, 0,{{0,7},{1,7},{2,7}}},
     	  	    navio3canos2_F9 = {'I', 3, 0,{{4,8},{5,8},{6,8}}};
	Navio4Canos navio4canos_F9 = {'J', 4, 0,{{0,0},{0,1},{0,2},{0,3}}};
	PortaAvioes portaAvioes_F9 = {'K', 5, 0,{{7,1},{8,1},{9,0},{9,1},{9,2}}};
	
	Frota frota_9 = {11, {submarino1_F9, submarino2_F9, submarino3_F9, submarino4_F9} , {navio2canos1_F9, navio2canos2_F9, navio2canos3_F9} , {navio3canos1_F9, navio3canos2_F9}, {navio4canos_F9}, {portaAvioes_F9}, tabuleiro_9[DIM][DIM]};
	
	
	Submarino submarino1_F10 = {'A', 1, 0,{{8,1}}},
  			  submarino2_F10 = {'B', 1, 0,{{8,3}}},
  			  submarino3_F10 = {'C', 1, 0,{{1,6}}},
  			  submarino4_F10 = {'D', 1, 0,{{1,8}}};
	Navio2Canos navio2canos1_F10 = {'E', 2, 0,{{4,0},{4,1}}},
     	  	    navio2canos2_F10 = {'F', 2, 0,{{8,8},{8,9}}},
     	  	    navio2canos3_F10 = {'G', 2, 0,{{0,0},{0,1}}};
	Navio3Canos navio3canos1_F10 = {'H', 3, 0,{{7,5},{8,5},{9,5}}},
     	  	    navio3canos2_F10 = {'I', 3, 0,{{6,0},{6,1},{6,2}}};
	Navio4Canos navio4canos_F10 = {'J', 4, 0,{{0,3},{1,3},{2,3},{3,3}}};
	PortaAvioes portaAvioes_F10 = {'K', 5, 0,{{3,7},{4,7},{5,6},{5,7},{5,8}}};
	
	Frota frota_10  = {11, {submarino1_F10, submarino2_F10, submarino3_F10, submarino4_F10} , {navio2canos1_F10, navio2canos2_F10, navio2canos3_F10} , {navio3canos1_F10, navio3canos2_F10}, {navio4canos_F10}, {portaAvioes_F10}, tabuleiro_10[DIM][DIM]};

	//Copia a frota selecionada, para o bloco de memória da passada como parâmetro na função.
	switch(n) {
		case 0 : preencheTabuleiro (&frota_0);							
				 memcpy(frota , &frota_0, sizeof(Frota)); break;
		case 1 : preencheTabuleiro (&frota_1);
				 memcpy(frota , &frota_1, sizeof(Frota)); break;
		case 2 : preencheTabuleiro (&frota_2);
				 memcpy(frota , &frota_2, sizeof(Frota)); break;
		case 3 : preencheTabuleiro (&frota_3);
				 memcpy(frota , &frota_3, sizeof(Frota)); break;
		case 4 : preencheTabuleiro (&frota_4);
				 memcpy(frota , &frota_4, sizeof(Frota)); break;
		case 5 : preencheTabuleiro (&frota_5);
				 memcpy(frota , &frota_5, sizeof(Frota)); break;
		case 6 : preencheTabuleiro (&frota_6);
				 memcpy(frota , &frota_6, sizeof(Frota)); break;	
		case 7 : preencheTabuleiro (&frota_7);
				 memcpy(frota , &frota_7, sizeof(Frota)); break;
		case 8 : preencheTabuleiro (&frota_8);
				 memcpy(frota , &frota_8, sizeof(Frota)); break;
		case 9 : preencheTabuleiro (&frota_9);
				 memcpy(frota , &frota_9, sizeof(Frota)); break;
		case 10 :preencheTabuleiro (&frota_10);
				 memcpy(frota , &frota_10, sizeof(Frota)); break;
				 		
	}

	
}
