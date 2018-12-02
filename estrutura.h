/*
**ESTRUTURA
*/	

typedef int bool;
#define TRUE 1
#define FALSE 0
#define DIM 10
#define getBarraN while(getchar() != '\n') 

typedef struct sTiro {
	char cTiro;										//Letra que corresponde a uma coluna.
	int lTiro;										//Número que corresponde a uma linha.
} Tiro;

typedef struct sSubmarino {
	char id;										//Letra de identificação do barco no tabuleiro.	
	int capacidade;									//Posições que ocupa no tabuleiro, número de canos.
	int estado;										//Estado actualizado do barco: 0 senão foi atingido, estado = capacidade se afundou.
	int coordenadas[1][2];							//Coordenadas do tabuleiro, ja convertidas, onde se encontra cada barco.
} Submarino;

typedef struct sNavio2Canos {
	char id;			
	int capacidade;		
	int estado;	
	int coordenadas[2][2];	
} Navio2Canos;

typedef struct sNavio3Canos{
	char id;			
	int capacidade;		
	int estado;	
	int coordenadas[3][2];	
} Navio3Canos;

typedef struct sNavio4Canos {
	char id;			
	int capacidade;		
	int estado;	
	int coordenadas[4][2];	
} Navio4Canos;

typedef struct sPortaAvioes {
	char id;			
	int capacidade;		
	int estado;	
	int coordenadas[5][2];	
} PortaAvioes;

typedef struct sFrota {
	int nBarcos;									//Total de Barcos em cada Frota.
	Submarino submarino[4];							//4 submarinos.
	Navio2Canos navio2canos[3];  					//3 Navios de 2 canos.
	Navio3Canos navio3canos[2];    					//2 Navios de 3 canos.
	Navio4Canos navio4canos[1];     				//1 Navios de 4 canos.
	PortaAvioes portaAvioes[1];    					//1 Porta Aviões
	char tabuleiro[DIM][DIM];						//Tabuleiro respectivo preenchido.
} Frota;

