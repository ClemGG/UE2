#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

	FILE* fichier = NULL;
	fichier = fopen("Historique.txt","w+");

	char* a;

	char buffer[256];
	time_t timestamp = time(NULL);

	strftime(buffer, sizeof(buffer), "%A %d %B %Y - %X", localtime(&timestamp));
	a =("%s\n", buffer);

	if(fichier != NULL){

		fputs(a, fichier);
		fclose(fichier);

		int b = fgetc(fichier);
		printf("%d\n",b);

	}
}
