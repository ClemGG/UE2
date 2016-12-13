#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <termios.h>
#define COMPTEUR 5
int main(){

int compteur = COMPTEUR;

printf("%d\n", compteur);

	while(compteur != 0){


		sleep(1);
		compteur = compteur - 1;
		printf("%d\n", compteur);

}

//system("./termSaver");
//return 0;
execlp("/home/exia/ProjetUE2/POCS/termSaver", NULL);
}
