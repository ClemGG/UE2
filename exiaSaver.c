#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include "Default.c"
#include "fork.c"
#define COMPTEUR 7


int main(){


int compteur = COMPTEUR;
system("clear");
//printf("%d\n", compteur);
while(compteur !=0){

	sleep(1);
	compteur = compteur - 1;
//	printf("%d\n", compteur);


}

pid_t pid = create_process();
printf("\n");
srand(time(NULL));
int nbgen = rand()%3+1;



if(pid == -1){
perror("fork");
return EXIT_FAILURE;
}

	else if(pid == 0){

if(nbgen == 1){
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/StatScreen", NULL);
}

else if(nbgen == 2){
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/DynaScreen", NULL);
}

else if(nbgen == 3){
father_process(pid);
sleep(1);
child_process();
sleep(1);
printf("Le TermSaver lancé est le n°%d.\n", nbgen);
sleep(1);
execlp("/home/exia/ProjetUE2/projet/bonprojet/FinalProject/InteraScreen", NULL);
}


return EXIT_SUCCESS;

	}
wait(1);

}

