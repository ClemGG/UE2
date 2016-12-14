#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include "Default.c"
#define COMPTEUR 5

int main(){
int compteur = COMPTEUR;

printf("%d\n", compteur);

	while(compteur != 0){

		sleep(1);
		compteur = compteur - 1;
		printf("%d\n", compteur);


}

srand(time(NULL));
int nbgen = rand()%3+1;

if(nbgen == 1){
printf("TermSaver lancé : n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/Projet2/FinalProject/StatScreen", NULL);
}
if(nbgen == 2){
printf("TermSaver lancé : n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/Projet2/FinalProject/DynaScreen", NULL);
}
if(nbgen == 3){
printf("TermSaver lancé : n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/Projet2/FinalProject/InteraScreen", NULL);
}

}
