#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"


int main(){
	// Vide l'ecran
	system("clear");
	// Centrage de l'image en Y
	xySlide(30,-6);
	// Affiche fichier.bmp
	printFile('i',rng(3),30);
	printf("\n");
	xySlide(0,-10);
	// Exit processus en cas de touche 'q'
	char c;
	while(c == 0){
		c = getchar();
		// Vide l'ecran
		if((c=getchar()) != 0){
		system("clear");
		}
	}
	return 0;
}
