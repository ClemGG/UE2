#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void Historique(int numTerm, int parametre);

int main(){
Historique(1,2);
}


//On initialise chaque paramètre de la fonction

void Historique(int numTerm, int parametre){
//On crée et ouvre un fichier pour y stocker l'historique
	FILE* fichier = NULL;
	fichier = fopen("Historique.txt","a+");

//On initialise une variable pour y écrire ce qu'il y a dans la mémoire tampon
	char* a;
	char buffer[256];
//On initialise à 0
	time_t timestamp = time(NULL);
//On écrit dans a la date et l'heure (format paramétrable)
	strftime(buffer, sizeof(buffer), "%A %d %B %Y - %X", localtime(&timestamp));
	a =("%s", buffer);

// On place dans le fichier texte la valeur a
if(fichier != NULL){
		fputs(a, fichier);

		int b = fgetc(fichier);
		printf("%d\n",b);

//On inscrit ensuite chacun des paramètres affectés aux deux variables via les exécutables
	fprintf(fichier," TermSaver n°:%d, Parametre:%d\n",numTerm, parametre);
//On ferme le fichier pour enregistrer
	fclose(fichier);
}
}
