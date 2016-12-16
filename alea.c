#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int alea(){
	//Initialise le temps à 0.
	srand(time(NULL));
	//Génère un chiffre entre 1 et 3.
	int nbgen = rand()%3+1;
	//Affiche le chiffre généré.
	printf("%d\n", nbgen);
	return 0;
}
