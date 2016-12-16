#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"
#include "Historique.c"

int main(){

	system("clear");
///On définit une variable qui servira à détecter les entrées clavier
	char c;

//On définit la position aléatoire de l'avion
	int AvionX=rng(70);
	int AvionY=-rng(25);

//On l'enregistre dans Historique.txt
	Historique(3,AvionX,AvionY);

//On affiche l'avion à l'écran
	xySlide(0,AvionY);
	printFile('a',rng(3),AvionX);

//Tant que l'on a pas entré la touche q (quitter)
	while(c != 'q'){
		//xySlide(-80,-30);
		c = getchar();

//Si on appuie sur la touche de droite
		if(c == 'h'){
			system("clear");
//On change la position de l'avion
			AvionX++;
//On décale l'avion d'une unité vers la droite
			xySlide(AvionX,AvionY);
			printFile('a',1,AvionX);
		}
//Touche de gauche
		else if (c == 'f'){
			system("clear");
//Changement de position
			AvionX--;
//Déplacement vers la gauche
			xySlide(AvionX,AvionY);
			printFile('a',3,AvionX);
		}
//Touche de bas
		else if (c == 'g'){
			system("clear");
//Changement de position
			AvionY--;
//Déplacement vers le bas
			xySlide(AvionX,AvionY);
			printFile('a',2,AvionX);
		}
//Touche du haut
		else if (c == 't'){
			system("clear");
//Changement de position
			AvionY++;
//Déplacement vers le haut
			xySlide(AvionX,AvionY);
			printFile('a',0,AvionX);
		}
	}
	xySlide(-80,0);
//On vide l'écran lorsqu'on entre la touche q
	system("clear");
}
