#ifndef __ARMAS.H_
#define __ARMAS.H_

void info_armas(char arma[15], char conjur[10], char armadura[15]){
	
	char choice;
	int cont;
	
	do{
		cont = 0;
		
		printf(" ------------------------------------\n");
		printf("|           Voc� est� usando         |\n");
		printf("|                                    |\n");
		printf("|  Espada     :    %s      |\n",arma );
		printf("|  Magia      :    %s           |\n", conjur);
		printf("|  Armadura   :    %s        |\n", armadura);
		printf("|                                    |\n");	
		printf("|     Para ver as informa��es das    |\n");
		printf("|       armas que estais a usar      |\n");
		printf("|             precione 'f'           |\n");
		printf(" ------------------------------------\n");
		printf("      --> Aperte 's' para sair       \n");
		scanf("%c", &choice);
		fflush(stdin);
		system("cls");
		
		switch(choice){
			
			case 's':
				back();
			break;
			
			case 'f':
			
				if(strcmp(arma,"Espada Curta")){
				
				}else{
					espada_curta(); //armas.h
					cont++;
				}
				
				if(strcmp(conjur,"Varinha")){
				
				}else{
					varinha(); 		//armas.h
					cont++;
				}
				
				
				if(strcmp(armadura,"Couro Leve")){
				
				}else{
					couro_leve(); 	//armas.h
					cont++;
				}
			break;
			
			default:
				cont++;
			break;
		}
	}while(cont != 0);
	
								
}	

void espada_curta(){
	printf(" --------------------------------\n");
	printf("|          Espada Curta          |\n");
	printf("|                                |\n");
	printf("|  A Espada Curta � capaz de     |\n");
	printf("|  causa sangramento em seres    |\n");
	printf("|  que n�o s�o do submundo.      |\n");
	printf("| (Caso fa�a 5 ataques seguidos) |\n");
	printf("|--------------------------------|\n");
	printf("|             STATUS             |\n");
	printf("|                                |\n");
	printf("|    Dano : 3~8                  |\n");
	printf("|    Dura��o: Ilimitado          |\n");
	printf("|                                |\n");
	printf("| 'Seres do submundo s�o imunes' |\n");
	printf("|                                |\n");
	printf("|                                |\n");
	printf("|    Aperte qualquer bot�o para  |\n");
	printf("|           Continuar...         |\n");
	printf("|                                |\n");
	printf(" --------------------------------\n");
	getch();
	system("cls");
}	

void varinha(){
	printf(" --------------------------------\n");
	printf("|            Varinha             |\n");
	printf("|                                |\n");
	printf("|  A Varinha concentra seu poder |\n");
	printf("|  na ponta do artefato fazendo  |\n");
	printf("|  com que cada ataque seja      |\n");
	printf("|  mortal.                       |\n");
	printf("|--------------------------------|\n");
	printf("|             STATUS             |\n");
	printf("|                                |\n");
	printf("|    Dano : +2 (cada magia)      |\n");
	printf("|                                |\n");
	printf("|    Aperte qualquer bot�o para  |\n");
	printf("|           Continuar...         |\n");
	printf("|                                |\n");
	printf(" --------------------------------\n");
	getch();
	system("cls");
}

void couro_leve(){
	printf(" --------------------------------\n");
	printf("|          Couro Leve            |\n");
	printf("|                                |\n");
	printf("|  A armadura de Couro Leve te   |\n");
	printf("|  protejer� de ataques simples. |\n");
	printf("|  Provavelmente ser� ele que    |\n");
	printf("|  vai salvar sua vida da morte. |\n");
	printf("|--------------------------------|\n");
	printf("|             STATUS             |\n");
	printf("|                                |\n");
	printf("|    Prote��o : +2               |\n");
	printf("|                                |\n");
	printf("|    Aperte qualquer bot�o para  |\n");
	printf("|           Continuar...         |\n");
	printf("|                                |\n");
	printf(" --------------------------------\n");
	getch();
	system("cls");
}

int esquiva_arm(int esquiva,int aux,int esquiva_bkp, char armadura[15]){
	
	if(strcmp(armadura,"Couro Leve")){
		
	}else{
		if(esquiva == aux && aux == esquiva_bkp && esquiva_bkp == esquiva){
			esquiva = esquiva + 1;
		}
		
		esquiva = esquiva - 1;
		
		if(esquiva == aux-2){
			esquiva = esquiva + 1;							
		}
	}
	
	if(strcmp(armadura,"Couro Pesado")){
		
	}else{
		esquiva = esquiva - 2;
		
		if(esquiva == aux-4){
			esquiva = esquiva + 2;							
		}
	}
	
	if(strcmp(armadura,"Placas Leves")){
		
	}else{
		esquiva = esquiva - 4;
		
		if(esquiva == aux-8){
			esquiva = esquiva + 4;							
		}
	}
	
	if(strcmp(armadura,"Placas Pesadas")){
		
	}else{
		esquiva = esquiva - 6;
		
		if(esquiva == aux-12){
			esquiva = esquiva + 6;						
		}
	}
	
	return esquiva;
}

#endif
