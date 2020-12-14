#include <stdio.h>
#include <math.h>   // Análise combinatória
#include <string.h> // Análise de string

#include <locale.h>	//acentuação

//rand()

#include <stdlib.h> //gerar numeros pseudo-aleatórios
#include <time.h>	//temporizar os numeros aleatórios

//Header interno
#include "user.h"
	#include "armas.h"
	#include "magic.h"
	
#include "boss.h"
#include "kleber.h"

#include "falas.h"
#include "inimigos.h"

void delay(int milli);

int main (void){
	// --> Variaveis <-- //
	
	//////////////////////////////////////////////////////
	//										 			//
	
	char carac,        cont,          nome[250] = "�";  //789
	
	//     |             |              |    			//
	//     V             V              V    			//
	// Caracter de // Contagem de // Nome do 			//
	// validação   //  passagem   // Jogador 			//
	//										 			//
	//////////////////////////////////////////////////////
	
	/* 					  #### --> Chefes	<--	####					   */
	/////////////////////////////////////////////////////////////////////////
	// 																	   //
	
	int arth = 0,  fhe = 0,  mil = 0,  con = 0,   lhe = 0,   entrada = 0;  //
	
	//(Artherius / Fheuren / Milhity / Conphoda / Lhedillv/ Valida entrada)//
	//(         / Fheuren /  Aranha /  Morcego / Lhedillv/ Valida entrada)//
	
	// 																	   //
	/////////////////////////////////////////////////////////////////////////
	
	
	//  ## --> Desenhos <-- ##  //
	
	char a = 96;		        //
	
	//////////////////////////////
	
	
	// 	 ## Personagem ##	//
	int
		forca   	= 0,    //5
		esquiva 	= 0,    //2, 10
		magia   	= 0,    //
		pocao   	= 1,    //
		livro   	= 3;    //
	
	//						//
	float
		vida_pj 	= 100.0,//
	   	coin    	= 10.0; //
	//////////////////////////
	
	//   ## Lojinha ##   //
	/*
	int forca   = 5,     //
		esquiva = 2,     //
		magia   = 3,     //
		pocao   = 1,     //
		livro   = 3,     //
		vida_pj = 100,   //
		coin    = 25;    //
	*/
	///////////////////////
	
	//               ## --> Combate, Armas e outros <-- ##					//
	char 																	//
		armas   [25]    = "Espada Curta", 									//
		conjur  [25]    = "Varinha",      									//
		armadura[25]    = "Couro Leve";  									//
	//																		//
	// 																	    //
	//////////////////////////////////////////////////////////////////////////	 
	
	srand(time(NULL));
	setlocale(LC_ALL,"");
	
	
	///////////		 ## --> AJUSTES <-- ##     ///////////////
	//														//
	// Gerar aleatóriamente os valores do personagem	//////
	//														//
	
	forca = (rand() % 7) + 2; // 2 ~ 9						//
	
	//														//
	
	esquiva = (rand() % 3) + 3; // 3 ~ 6					//
	
	//														//
	
	magia = (rand() % 7) + 1; // 1 ~ 8 						//
	
	//////////////////////////////////////////////////////////
	//														//
	// 						ESQUIVA	 						//
	//														//
	int esquiva_bkp = 0, 									//
		aux 		= 0;									//
			
	aux = esquiva_bkp;										//
	esquiva_bkp = esquiva;									//
	
	//														//
		
	esquiva = esquiva_arm(esquiva,aux,esquiva_bkp, armadura); //armas.h
	//														//
	//////////////////////////////////////////////////////////
	
	printf(" -------------------------------- \n");
	printf("|         BEM VIND@ :D           |\n");
	printf("|                                |\n");
	printf("|    Este é um beta de rpgzin    |\n");
	printf("|      espero que goste :3       |\n");
	printf("|                                |\n");
	printf("|    Aperte qualquer botão para  |\n");
	printf("|           Continuar...         |\n");
	printf(" -------------------------------- \n");
	getch();
	system("cls");
	
	por_letra("Como deseja ser chamado?", 60);
	printf("\nDiga seu nome: ");
	scanf ("%[^\n]%*c", nome);
	fflush(stdin);
	system("cls");
	
	
		if(strcmp(nome,"�")){
			
		}else{
			do{
				cont = 0;
				
				printf("Coloque algo no nome para ter uma experiencia melhor :)");
				
				printf("\n\n");
				
				por_letra("Como deseja ser chamado?", 20);
				printf("\nDiga seu nome: ");
				gets (nome);
				fflush(stdin);
				system("cls");
				
				if(strcmp(nome,"")){
					
				}else{
					cont++;
				}
			}while(cont != 0);
		}
	
	printf("Olá %s!!!", nome);
	delay(100);
	
	printf("\n\n");
	
	por_letra("Entregarei-lhe um papiro com as informa��es sobre tua jornada.", 20);
	delay(500);
	
	printf("\n\n");
	
	por_letra("�s de fato muito corajoso para aceitar algo assim", 20);
	
	printf("\n");
	
	por_letra("Espero que voc� consiga :3", 20);
	
	printf("\n\n\n");
	delay(500);
	
	system("pause");
	system("cls");
	
	saudacoes(a);  //user.h
	
	system("pause");
	system("cls");
	
	tk_iselda(a);

	do{
		do{
			cont = 0;
			printf("Informa��es sobre voc� (%s)\n", nome);
			printf("(precisone 'i')\n\n", nome);
			printf("\n --------------------------------------------------\n");
			printf("|   Ver o sal�o dos chefes       (precisone 'c')   |\n");
			printf("|                                                  |\n");
			printf("|   Lojinha do Kleber            (precisone 'k')   |\n");
			printf("|                                                  |\n");
			printf("|   Sair do jogo                 (precisone 'w')   |\n");
			printf(" --------------------------------------------------\n");
			scanf("%c", &carac);
			fflush(stdin);
			system("cls");
			
			switch(carac){
				case 'i':
					
					// ################ INFORMA��ES SOBRE O JOGADOR ################ //
					do{
						cont = 0;
						
						aux = esquiva_bkp;
						esquiva_bkp = esquiva;
										
						esquiva = esquiva_arm(esquiva,aux,esquiva_bkp, armadura); //armas.h
																					
						info_pj(forca, esquiva, magia, pocao, livro, coin, vida_pj); //user.h
						
						scanf(" %c", &carac);
						fflush(stdin);
						system("cls");
						
						switch(carac){
							case 'a':
								info_armas(armas, conjur, armadura); //armas.h
								cont++;
							break;
							
							case 'm':
								info_magic(); //magic.h
								book_magic(); //magic.h
								cont++;
							break;
							
							case 's':
								back();
							break;
							
							default:
								cont++;
							break;
						}
					}while(cont != 0);
					cont++;
				break;
				
				case 'c':
					// ################ SAL�O DE CHEFES ################ //
					do{
						cont = 0;
						
						printf("Ent�o %s...\n\nEsta � a sala de chefes. Se voc� entrar pe�o que reze pela sua vida\n\n", nome);
						
						boss_room(arth, fhe); //boss.h
						
						scanf(" %c", &carac);
						fflush(stdin);
						system("cls");
						
						switch(carac){
							case '1':
								Milhity_sub_aranha();
								cont++;
							break;
							
							case '2':
								
								
							break;
							
							case '3':
								
								
							break;
							
							case '4':
								
									
							break;
							
							case 's':
								back();
							break;
							
							default:
								cont++;
							break;
						}
					}while(cont != 0);
					cont++;			
				break;
				
				
				case 'k':
					// ################ LOJINHA DO KLEBER ################ //
					do{	
						cont = 0;
											
						if(entrada == 0){
							printf(" --------------------------------------\n");
							printf("|            LOJINHA DO KLEBER         |\n");
							printf("|                                      |\n");
							printf("|              este � Kleber           |\n");
							printf("|                    B)                |\n");
							printf(" --------------------------------------\n\n");
			
							printf("OOOOOOOOOOOOOOOOOO ent�o voc� � o %s certo??.\nOuvi falar muito bem de voc�.\n", nome);
							printf("OQUE?? MASMORRA?? CHEFES??\n");
							printf("HMMMMMMMMMMMMMMMMMMMMM\n");
							printf("\nAt� hoje nunca vi ningu�m sair vivo de l�...\n\n");
							printf("Mas vejo que est� precisando de Armas e Armaduras...\n");
							printf("Fique a vontade para escolher oque quiser\n\n");		
							getch();
							system("cls");
							entrada++;
						}
						
						if (entrada != 0){
							
							kleber_shop(coin); //kleber.h
							pag_1(arth,fhe); 
							
							scanf("%c", &carac);
							fflush(stdin);
							system("cls");
						}
						
						switch(carac){
							case '1':
								esquiva += 10;
								cont++;
								break;
								
							case '2':
								
								strcpy(armas, "Machado de batalha");
								cont++;
								
								break;
								
							case '3':
								
								strcpy(armadura, "Couro Pesado");
								cont++;
								
								break;
								
							case '4':
								
								break;
							
							case 's':
								back();
							break;		
						
							default:
								cont++;
							break;
						}
						
					}while(cont != 0);
					cont++;
				break;
				
				default:
					cont++;
				break;
			}
			
			/*
			if (carac == 's'){
				back(); //user.h
			
				cont++;
			}
			*/
			
			if (carac == 'w'){
				leave();
				
				return 0;
			}
			
		}while(cont != 0);		
	}while(cont != 0);
}

void delay(int milli){ 
    // Inicia o timer 
    clock_t start_time = clock(); 
  
    // looping em milli-segundos 
    while (clock() < start_time + milli); 
}
