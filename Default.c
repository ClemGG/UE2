#include "Default.h"

// Affiche un certain fichier a l'ecran
// LE FICHIER DOIR COMMANCER PAR UN '\n'
void printFile(char type, int fileNum, int xPosition){
	// Variable contenant chaques caracteres du fichier
	int c;
	// Tableau de char contenant le nom du fichier a ouvrir
	char fileName[7] = {' ',' ','.','b','m','p','\0'};
	// Remplace les ' ' dans le nom par le numero / type du fichier a ouvrir
	fileName[0] = type;
	fileName[1] = intToChar(fileNum);
	FILE *file;
	// Ouverture du fichier en question, en mode lecture
	file = fopen(fileName, "r");
	// Verifie si le fichier contient des caracteres
	if(file){
		// Assimile la variable "c" avec chaque caractere du fichier
		while((c = getc(file)) != EOF){
			// Imprime un " " lorsque c = '0'
			if(c == '0'){
				printf(" ");
			}
			// Imprime un "X" lorsque c = '1'
			else if(c == '1'){
				printf("%c", ASCII);
			}
			// Recentrage a l'ecran de la nouvelle ligne (en cas de 'retour a la ligne')
			else if(c == '\n'){
				printf("\n");
				xSlide(xPosition);
			}
		}
		// Fermeture du fichier
		fclose(file);
	// Imprime un message d'erreur dans le cas ou le fichier contient aucun caracteres
	}else{
		printf("Cannot print file : No file with such name");
	}
}

// Fonction responsable du centrage de l'ecran en X
void xSlide(int x){
	if(x == 0){/* No Slide */}
	else if(x == 1){printf("\033[30C");}
}
// Fonction responsable du centrage de l'ecran en Y
void ySlide(int y){
	if(y == 0){/* No Slide */}
	else if(y == 1){printf("\033[6B");}
}
// Generateur random de int
int rng(int maxVal){
	srand(time(NULL));
	int r = rand() % maxVal;
	return r;
}
// Convertisseur int --> char
char intToChar(int n){
	char c = n + '0';
	return c;
}
