#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void Historique(int numTerm, int parametre);

int main(){

	Historique(1,2);
}

void Historique(int numTerm, int parametre){

	FILE* fichier = NULL;
	fichier = fopen("Historique.txt","w+");

	char* a;

	char buffer[256];
	time_t timestamp = time(NULL);

	strftime(buffer, sizeof(buffer), "%A %d %B %Y - %X", localtime(&timestamp));
	a =("%s\n", buffer);

	if(fichier != NULL){

		fputs(a, fichier);

		int b = fgetc(fichier);
		printf("%d\n",b);

	}

	fprintf(fichier," TermSaver n°:%d, Parametre:%d\n",numTerm, parametre);
	fclose(fichier);

}
