#ifndef __BOSS.H_
#define __BOSS.H_

void boss_room(int arth, int fhe){
	printf("Obs.: Uma vez que entrar, não poderá sair até que o Chefe seja morto, ou você morra tentando\n\n\n");
	if(arth == 0 && fhe == 0){
		printf(" ----------------------------------------\n");
		printf("|                  ??? (2)               |\n");
		printf("|                   ^                    |\n");
		printf("|                   |                    |\n");
		printf("|                                        |\n");
		printf("|    ??? (1)   <--  o/  -->   ??? (3)    |\n");
		printf("|                                        |\n");
		printf("|                   |                    |\n");
		printf("|                   v                    |\n");
		printf("|                  ??? (4)               |\n");
		printf(" ----------------------------------------\n");
		printf("        --> Aperte 's' para sair         \n");
	}else if(arth == 1 && fhe == 0){		
		printf(" ----------------------------------------\n");
		printf("|                  ??? (2)               |\n");
		printf("|                   ^                    |\n");
		printf("|                   |                    |\n");
		printf("|   Reino                                |\n");
		printf("|    das (1)   <--  o/  -->   ??? (3)    |\n");
		printf("|  Aranhas                               |\n");
		printf("|                   |                    |\n");
		printf("|                   v                    |\n");
		printf("|                  ??? (4)               |\n");
		printf(" ----------------------------------------\n");
		printf("        --> Aperte 's' para sair         \n");
	}else if(arth == 0 && fhe == 1){
		printf(" ----------------------------------------\n");
		printf("|                  ??? (2)               |\n");
		printf("|                   ^                    |\n");
		printf("|                   |                    |\n");
		printf("|                                        |\n");
		printf("|    ??? (1)   <--  o/  -->   ??? (3)    |\n");
		printf("|                                        |\n");
		printf("|                   |                    |\n");
		printf("|                   v                    |\n");
		printf("|                  ??? (4)               |\n");
		printf(" ----------------------------------------\n");
		printf("        --> Aperte 's' para sair         \n");	
	}else{
		
	}
	
	
	delay(2000);
	
	Milhity_sub_aranha();
}

void map_pre(char b){
	
	printf("                  _______						\n");
    printf("                 / _____ %c						\n",b);//1
    printf("           _____/ /     %c %c_____				\n",b,b);//2
    printf("          / _____/  311  %c_____ %c				\n",b,b);//2
    printf("    _____/ /     %c       /     %c %c_____		\n",b,b,b);//3
	printf("   / _____/  221  %c_____/  412  %c_____ %c		\n",b,b,b);//3
	printf("  / /     %c       /     %c       /     %c %c	\n",b,b,b,b);//4
	printf(" / /  131  %c_____/  322  %c_____/  513  %c %c	\n",b,b,b,b);//4
	printf(" %c %c       /     %c       /     %c       / /	\n",b,b,b,b);//4
	printf("  %c %c_____/  232  %c_____/  423  %c_____/ /	\n",b,b,b,b);//4
	printf("  / /     %c       /     %c       /     %c %c	\n",b,b,b,b);//4
	printf(" / /  142  %c_____/  333  %c_____/  524  %c %c	\n",b,b,b,b);//4
	printf(" %c %c       /     %c       /     %c       / /	\n",b,b,b,b);//4
	printf("  %c %c_____/  243  %c_____/  434  %c_____/ /	\n",b,b,b,b);//4
	printf("  / /     %c       /     %c       /     %c %c	\n",b,b,b,b);//4
	printf(" / /  153  %c_____/  344  %c_____/  535  %c %c	\n",b,b,b,b);//4
	printf(" %c %c       /     %c       /     %c       / /	\n",b,b,b,b);//4
	printf("  %c %c_____/  254  %c_____/  445  %c_____/ /	\n",b,b,b,b);//4
	printf("   %c_____ %c       /     %c       / _____/		\n",b,b,b);//3
    printf("         %c %c_____/  355  %c_____/ /			\n",b,b,b);//3
    printf("          %c_____ %c       / _____/				\n",b,b);//2
    printf("                %c %c_____/ /					\n",b,b);//2
	printf("                 %c_______/						\n",b);//1
}

void Milhity_sub_aranha(){
		
	printf("                  :                     \n");         
	printf("       ,,         :         ,,    		\n");       
	printf("       ::         :         ::          \n");
	printf(",,     ::         :         ::     ,,   \n");
	printf("::     ::         :         ::     ::   \n");
	printf(" '::.   '::.      :      .::'   .::'    \n");
	printf("    '::.  '::.  _|~|_  .::'  .::'       \n");
	printf("      '::.  :::/     \:::  .::'     	\n");
	printf("        ':::::(       ):::::'    		\n");
	printf("         .:::::|´   ´|:::::.      		\n");
	printf("       .::'   .:o o /:.   '::.        	\n");
	printf("     .::'   .::  :':  ::.   '::.   		\n");
	printf("   .::'    ::'   ' '   '::    '::.     	\n");
	printf("  ::      ::             ::      ::  	\n");
	printf("  ^^      ::             ::      ^^   	\n");
	printf("          ::             :: 			\n");
	printf("          ^^             ^^ 			\n");

	delay(1000);
	
	system("color 4f");
}

void Conphoda_morcego(){
	
	printf(" #                                                                    \n");
	printf(" ##                                                                   \n");
	printf(" ###                                                                  \n");
	printf("  ####                                                                \n");
	printf("   #####                                                              \n");
	printf("   #######                                                            \n");
	printf("    #######                                                           \n");
	printf("    ########                                                          \n");
	printf("    ########                                                          \n");
	printf("    #########                                                         \n");
	printf("    ##########                                                        \n");
	printf("   ############                                                       \n");
	printf(" ##############                                                       \n");
	printf("################                                                      \n");
	printf(" ################                                                     \n");
	printf("   ##############                                                     \n");
	printf("    ##############                                              ####  \n");
	printf("    ##############                                           #####    \n");
	printf("     ##############                                      #######      \n");
	printf("     ##############                                 ###########       \n");
	printf("     ###############                              #############       \n");
	printf("     ################                           ##############        \n");
	printf("    #################      #                  ################        \n");
	printf("    ##################     ##    #           #################        \n");
	printf("   ####################   ###   ##          #################         \n");
	printf("        ################  ########          #################         \n");
	printf("         ################  #######         ###################        \n");
	printf("           #######################       #####################        \n");
	printf("            #####################       ###################           \n");
	printf("              ############################################            \n");
	printf("               ###########################################            \n");
	printf("               ##########################################             \n");
	printf("                ########################################              \n");
	printf("                ########################################              \n");
	printf("                 ######################################               \n");
	printf("                 ######################################               \n");
	printf("                  ##########################      #####               \n");
	printf("                  ###  ###################           ##               \n");
	printf("                  ##    ###############                               \n");
	printf("                  #     ##  ##########                                \n");
	printf("                            ##    ###                                 \n");
	printf("                                  ###                                 \n");
	printf("                                  ##                                  \n");
	printf("                                  #                                   \n");

}

#endif
