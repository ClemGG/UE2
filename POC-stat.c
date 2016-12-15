#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]){
	int m;
	char tab[10];
	strcpy(tab,"-stat");
	if(argc != 1){

		if(m=(strcmp(argv[1],tab)) == 0){
		//	printf("mes couilles au bord de l'eau\n");
			execlp("/home/Projet2/Projet2/Historique",NULL);
		}
		else{
			printf("coucou");
		}
	}
	else{
		printf("Salut toi!");
	}
}
