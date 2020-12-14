#ifndef __FALAS.H_
#define __FALAS.H_

void tk_iselda(char a){
	printf("         .-.             \n");
	printf("        (. .)__,')       \n");
	printf("        / V      )       \n");
	printf("  ()    \\  (   \\/      \n");
	printf("<)-%c\\()  %c._%c._ \\   \n",a,a,a);
	printf("  <).>=====<<==%c'====   \n",a);
	printf("   C-'%c(>               \n",a);
	
	por_letra("Sua missão é derrotar 4 chefes, cada um mais desafiador que o outro.", 30);
	printf("\n");
	
	por_letra("Boa sorte (talvez você precise... kk)", 30);
	
	printf("\n\n");
}

///*




//*/
void por_letra(char * frase, int dy){
	
	int tam, i;
	
	tam = strlen(frase);
	
	for(i=0; i<=tam; i++){
		printf("%c", frase[i]);
		delay(dy);
	}
}

#endif
