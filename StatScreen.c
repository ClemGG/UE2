#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"



int StatScreen(){
	// Vide l'ecran
	system("clear");
	// Centrage de l'image en Y
	ySlide(1);
	// Affiche fichier.bmp
	printFile('i',rng(3),1);
	printf("\n\033[6B");
	// Exit processus en cas de touche 'q'
	char c;
	while(c == 0){
		c = getchar();
		printf("\033[1A");
	}
	// Vide l'ecran avant
	system("clear");
	return 0;
}
