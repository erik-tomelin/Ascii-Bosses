#ifndef __USER.H_
#define __USER.H_

void saudacoes(char a){
	
	int mai=2, mns=1;
	
	por_letra("	                                     _______________________               ", mns); printf("\n");
	por_letra("   _______________________-------------------                       \\      ", mns); printf("\n");
	por_letra(" /:--__                                                              |      ", mns); printf("\n");
	por_letra("	||< > |                           ___________________________/             ", mns); printf("\n");
	por_letra("| \\__/_________________-------------------                         |       ", mns); printf("\n");
	por_letra("| \\__/_________________-------------------                         |       ", mns); printf("\n");
	por_letra("|                                                                  |        ", mns); printf("\n");
	por_letra(" |                     O �NICO QUE PODE NOS SALVAR                  |       ", mai); printf("\n");
	por_letra(" |                                                                  |       ", mns); printf("\n");
	por_letra(" |        Nas terras long�nquas ao norte de Garfenia, existia um    |       ", mai); printf("\n");
	por_letra("  |          pacato reino onde v�rios habitantes viviam              |      ", mai); printf("\n");
	por_letra("  |       em paz e harmonia.                                         |      ", mai); printf("\n");
	por_letra("  |          Por�m, Lhedillv, um mago ganancioso por poder, criou 4  |      ", mai); printf("\n");
	por_letra("  |       criaturas horrendas, capaz de destruir todo o reino.       |      ", mai); printf("\n");
	por_letra("  |                                                                  |      ", mns); printf("\n");
	por_letra("  |       O feiti�o foi t�o forte que deixou as terras                |     ", mai); printf("\n");
	por_letra("   |      inf�rteis e as chuvas escassas.                             |     ", mai); printf("\n");
	por_letra("   |                                                                  |     ", mns); printf("\n");
	por_letra("   |      A profecia diz que, um ser divino de outro universo vir�    |     ", mai); printf("\n");
	por_letra("   |         para ajudar-nos, ele controlar� um de n�s, para         |      ", mai); printf("\n");
	por_letra("   |      que, de uma vez por todas, a fim do mago ser derrotado,    |      ", mai); printf("\n");
	por_letra("   |         o mundo volte a ser oque uma vez ele j� foi.            |      ", mai); printf("\n");
	por_letra("  |                                              ____________________|_     ", mns); printf("\n");
	por_letra("  |  ___________________-------------------------                      \\   ", mns); printf("\n");
	por_letra("  |/ --_                                                               |    ", mns); printf("\n");
	por_letra("  ||[ ]||                                            __________________/    ", mns); printf("\n");
	por_letra("   \\===/___________________--------------------------                      ", mns); printf("\n\n");
		
}


void info_pj(int forca, int esquiva, int magia, int pocao, int livro, float coin, float vida_pj){
	
	printf(" -----------------------------------\n");
	printf("|                                   |\n");
	printf("|            este � voc�            |\n");
	printf("|                o/                 |\n");
	printf("|                                   |\n");
	
	// ## --> VIDA <-- ## //
	
	if((vida_pj > -100)  && (vida_pj <= 10)){
		printf("| Vida     :  %.1f                 |\n", vida_pj);
	}else if((vida_pj > -10) && (vida_pj < 0)){
		printf("| Vida     :  %.1f                  |\n", vida_pj);
	}else if((vida_pj >= 0) && (vida_pj < 10)){
		printf("| Vida     :  %.1f                   |\n", vida_pj);	
	}else if((vida_pj >= 10)  && (vida_pj < 100)){
		printf("| Vida     :  %.1f                  |\n", vida_pj);
	}else if((vida_pj >= 100)  && (vida_pj < 1000)){
		printf("| Vida     :  %.1f                 |\n", vida_pj);
	}
	
	printf("|                                   |\n");
	
	// ## --> FORCA <-- ## //	
	if((forca > -10) && (forca < 0)){
		printf("| For�a    :  %i pontos             |\n", forca);
	}else if((forca >= 0) && (forca < 10)){
		printf("| For�a    :  %i pontos              |\n", forca);
	}else if((forca >= 10)  && (forca < 100)){
		printf("| For�a    :  %i pontos             |\n", forca);
	}else if((forca >= 100)  && (forca < 1000)){
		printf("| For�a    :  %i pontos            |\n", forca);
	}
	
	// ## --> ESQUIVA <-- ## //
	if((esquiva >= 0) && (esquiva < 10)){
		printf("| Esquiva  :  %i pontos              |\n", esquiva);	
	}else if((esquiva >= 10)  && (esquiva < 100)){
		printf("| Esquiva  :  %i pontos             |\n", esquiva);
	}else if((esquiva >= 100)  && (esquiva < 1000)){
		printf("| Esquiva  :  %i pontos            |\n", esquiva);
	}
	
	// ## --> MANA / MAGIA <-- ## //
	if((magia >= 0) && (magia < 10)){
		printf("| Mana     :  %i pontos              |\n", magia);	
	}else if((magia >= 10)  && (magia < 100)){
		printf("| Mana     :  %i pontos             |\n", magia);
	}else if((magia >= 100)  && (magia < 1000)){
		printf("| Mana     :  %i pontos            |\n", magia);
	}
	
	printf("|-----------------------------------|\n");
	printf("|              ITENS                |\n");
	printf("|                                   |\n");
	
	// ## --> POCAO <-- ## //
	if((pocao >= 0) && (pocao < 10)){
		printf("| Po��es   :  %i  Po��es de cura     |\n", pocao);	
	}else if((pocao >= 10)  && (pocao < 100)){
		printf("| Po��es   :  %i  Po��es de cura    |\n", pocao);
	}else if((pocao >= 100)  && (pocao < 1000)){
		printf("| Po��es   :  %i  Po��es de cura   |\n", pocao);
	}
	
	// ## --> LIVRO <-- ## //
	if((livro >= 0) && (livro < 10)){
		printf("| Livro    :  %i  Livros de estudo   |\n", livro);	
	}else if((livro >= 10)  && (livro < 100)){
		printf("| Livro    :  %i  Livros de estudo  |\n", livro);
	}
	
	// ## --> COIN <-- ## //
	if((coin >= 0) && (coin < 10)){
		printf("| Moedas   :  %.1f $                 |\n", coin);	
	}else if((coin >= 10)  && (coin < 100)){
		printf("| Moedas   :  %.1f $                |\n", coin);
	}else if((coin >= 100)  && (coin < 1000)){
		printf("| Moedas   :  %.1f $               |\n", coin);
	}else if((coin >= 1000)  && (coin < 10000)){
		printf("| Moedas   :  %.1f $              |\n", coin);
	}
	
	printf(" ----------------------------------- \n");
	printf("\n");
	printf(" ----------------------------------- \n");
	printf("|               ARMAS               |\n");
	printf("|                                   |\n");	
	printf("|  -->  Para informa��es de uso     |\n");
	printf("|  -->   das armas precione 'a'     |\n");
	printf("|                                   |\n");
	printf("|-----------------------------------|\n");
	printf("|               MAGIAS              |\n");
	printf("|                                   |\n");
	printf("|  -->  Para regras de uso das      |\n");
	printf("|  -->    magias precione 'm'       |\n");
	printf("|                                   |\n");
	printf("|  -->   Aperte 's' para sair       |\n");
	printf("|                                   |\n");
	printf(" -----------------------------------\n");
}

void val_false(){
	system("cls");
	printf("Valor invalido");
	delay(750);
	system("cls");
}
	
void back(){
	printf("Voltando...");
	delay(750);
	system("cls");
}

void leave(){
	printf("\nSee you later <3\n");
	return 0;
}

#endif
