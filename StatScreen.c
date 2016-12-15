#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"
#include "Historique.c"

int main(){
	//On génère un nombre aléatoire de paramètre
	int r = rng(3);
	// Vide l'ecran
	system("clear");
	// Centrage de l'image en Y
	xySlide(30,-6);
	// Affiche fichier.bmp
	printFile('i',r,30);
	r = r + 1;
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
Historique(1,r);
}
