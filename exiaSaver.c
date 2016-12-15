#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "Default.c"
#include "fork.c"
<<<<<<< HEAD
#define COMPTEUR 7
=======
#define COMPTEUR 3 //Valeur du compteur (paramétrable)
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef


int main(){


<<<<<<< HEAD
int compteur = COMPTEUR;
system("clear");
//printf("%d\n", compteur);
while(compteur !=0){

=======
int compteur = COMPTEUR; //On crée un compteur pour lancer les exécutables
system("clear");
//printf("%d\n", compteur);
while(compteur !=0){
//Le compteur décrémente toutes les secondes
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
	sleep(1);
	compteur = compteur - 1;
//	printf("%d\n", compteur);


}
<<<<<<< HEAD

pid_t pid = create_process();
printf("\n");
=======
//On crée un processus fils à l'aide du code source fork.c
pid_t pid = create_process();
printf("\n");

//On génère un nombre aléatoire  de sléction de l'exécutable
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
srand(time(NULL));
int nbgen = rand()%3+1;


<<<<<<< HEAD

=======
//S'il y a une erreur de création de processus fils, on quitte
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
if(pid == -1){
perror("fork");
return EXIT_FAILURE;
}
<<<<<<< HEAD

	else if(pid == 0){

if(nbgen == 1){
=======
//Sinon
	else if(pid == 0){
//Si le nombre aléatoire vaut 1
if(nbgen == 1){
//On quitte le processus père et on entre dans le processus fils
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
<<<<<<< HEAD
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/StatScreen", NULL);
}

else if(nbgen == 2){
=======
//On lance le TermSaver
execlp("/usr/bin/StatScreen", NULL);
}

//Si le nombre aléatoire vaut 2
else if(nbgen == 2){
//On quitte le processus père et on entre dans le processus fils
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
<<<<<<< HEAD
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/DynaScreen", NULL);
}

else if(nbgen == 3){
=======
//On lance le TermSaver
execlp("/usr/bin/DynaScreen", NULL);
}

//Si le nombre aléatoire vaut 3
else if(nbgen == 3){
//On quitte le processus père et on entre dans le processus fils
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
<<<<<<< HEAD
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/InteraScreen", NULL);
=======
//On lance le TermSaver
execlp("/usr/bin/InteraScreen", NULL);
>>>>>>> 402db7a1774bceb89eb575f500535c7aee7d38ef
}


return EXIT_SUCCESS;

	}
wait(1);

}

