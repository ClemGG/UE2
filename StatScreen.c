#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"


int main(){
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
	// Vide l'ecran
	if((c=getchar()) != 0){
		printf("\033[2J");

	}

	}

	return 0;
}
