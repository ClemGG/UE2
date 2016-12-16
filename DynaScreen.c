#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"
#include "Historique.c"
#define ACTUALISATION 7
#define CENTER 6

char timeString[7];

void loadingBar();//fonction d'actualisation du message d'attente
void tUpdate();//fonction d'actualisation de l'heure

int main(){
	char c;
	int r;
	int P;
	int i, j = CENTER;
	system("clear");
	xySlide(0,-9);

	while(c == 0){
//On écrit chaque caractère un à un, de sorte à affichier l'heure instantanée
		printFile('c',0,33);
		printFile('c',0,44);

		tUpdate();//On actualise l'heure
		for(i=0; i<6; i++){
			if(i == 2 || i == 4){j++;}
			printFile('n',timeString[i]-'0',j*4);
			j++;
		}
		j = CENTER;
		r = CENTER;
		P = CENTER;
		Historique(2,r,P);//On enregistre le format de centrage dans le fichier texte

		loadingBar();//On lance la fonction concernant le message
	}
	return 0;
}

void tUpdate(){
//On définit les variables liées au temps
	time_t current_time;
	struct tm * time_info;
//On récupère l'heure système
	time(&current_time);
	time_info = localtime(&current_time);
//On l'affiche à l'écran
	strftime(timeString, sizeof(timeString), "%H%M%S", time_info);
}

void loadingBar(){
	int i;
//On place le message d'actualisation en bas de l'écran
	xySlide(-80,-30);
	printf("Actualisation ");
//A chaque seconde, on rajoute un point, jusqu'à ce que i = constante d'actualisation définie plus haut
	for(i=0; i<ACTUALISATION; i++){
		printFile('c',1,i);
		xySlide(0,-4);
		sleep(1);
	}
// Lorsque i = ACTUALISATION, on vide l'écran
	xySlide(-80,13);
	printf("\033[2J");
}
