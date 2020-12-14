#ifndef __KLEBER.H_
#define __KLEBER.H_

int recebe = 0;

void kleber_shop(float coin){
	
	printf(" --------------------------------------\n");
	printf("|            LOJINHA DO KLEBER         |\n");
	printf("|                                      |\n");
	printf("|              este é Kleber           |\n");
	printf("|                    B)                |\n");
	printf(" --------------------------------------\n\n");
	printf("Fique a vontade para escolher oque quiser\n\n");
	printf("Você tem %.1f $ (Use-os com sabedoria...)\n\n", coin);
}

void pag_1 (int arth, int fhe){
	
	
	printf(" -------------------------------------- \n");
	printf("|                  ARMAS               |\n");
	printf("|                                      |\n");	
	printf("|  Machado de batalha   --> 28 $       |\n");
	printf("|  (min 9 forca)                       |\n");
	printf("|                                      |\n");
	printf("|  Marreta de duas mãos --> 22 $       |\n");
	printf("|  (min 7 forca)                       |\n");
	printf("|                                      |\n");

	if(arth != 0 || fhe != 0){
		
		printf(" --------------------------------------\n");
		printf("|             ARMAS ESPECIAIS          |\n");
		printf("|                                      |\n");
	
	}
	
	if(arth != 0){
		
		printf("|  Adaga de Artherius   --> 12 $       |\n");
		printf("|                                      |\n");
	
	}
	
	if(fhe != 0){
		
		printf("|  Espada Longa         --> 17 $       |\n");
		printf("|  (Rei Fheuren)                       |\n");
		printf("|                                      |\n");
		printf("|            />_______________         |\n");
		printf("|    [:]XXXX]| ___Fheuren___/\\|        |\n");
	    printf("|            \\>                        |\n");
	
	}	
	
	
	printf("|    pag '1'                pag '2' -->|\n");
	printf(" -------------------------------------- \n");
}

void pag_2 (){
	printf(" --------------------------------------\n");
	printf("|                  MAGIAS              |\n");
	printf("|                                      |\n");
	printf("|      -->   Para regras de uso das    |\n");
	printf("|      -->     magias precione 'm'     |\n");
	printf("|                                      |\n");
	printf("|      -->    Aperte 's' para sair     |\n");
	printf("|                                      |\n");
	printf("|<-- pag '1'                pag '3' -->|\n");
	printf(" --------------------------------------\n");
}

void pag_3 (){
	printf(" -------------------------------------- \n");
	printf("|                  ITENS               |\n");
	printf("|                                      |\n");
	printf("|<-- pag '2'                pag '3'    |\n");	
	printf(" -------------------------------------- \n");
}
#endif
