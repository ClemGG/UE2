#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "Default.c"
#include "fork.c"
#define COMPTEUR 3 //Valeur du compteur (paramétrable)


int main(){

int compteur = COMPTEUR; //On crée un compteur pour lancer les exécutables
system("clear");
//printf("%d\n", compteur);
while(compteur !=0){
//Le compteur décrémente toutes les secondes
	sleep(1);
	compteur = compteur - 1;
//	printf("%d\n", compteur);


}

//On crée un processus fils à l'aide du code source fork.c
pid_t pid = create_process();
printf("\n");

//On génère un nombre aléatoire  de sléction de l'exécutable
srand(time(NULL));
int nbgen = rand()%3+1;



//S'il y a une erreur de création de processus fils, on quitte
if(pid == -1){
perror("fork");
return EXIT_FAILURE;
}

	//Sinon
	else if(pid == 0){

//Si le nombre aléatoire vaut 1
if(nbgen == 1){
//On quitte le processus père et on entre dans le processus fils
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
//On lance le TermSaver
execlp("/usr/bin/StatScreen", NULL);
//execlp("/home/exia/ProjetUE2/projet/jpp/StatScreen", NULL);
}


//Si le nombre aléatoire vaut 2
else if(nbgen == 2){
//On quitte le processus père et on entre dans le processus fils
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
//On lance le TermSaver
execlp("/usr/bin/DynaScreen", NULL);
//execlp("/home/exia/ProjetUE2/projet/jpp/DynaScreen", NULL);
}


//Si le nombre aléatoire vaut 3
else if(nbgen == 3){
//On quitte le processus père et on entre dans le processus fils
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
//execlp("/home/exia/ProjetUE2/projet/jpp/InteraScreen", NULL);
//On lance le TermSaver
execlp("/usr/bin/InteraScreen", NULL);
}


return EXIT_SUCCESS;

	}
wait(1);

}

