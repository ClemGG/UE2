
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "StatScreen.c"
#include "DynaScreen.c"
int main(){
//On initialise la fonction srand()
srand(time(NULL));
//On génère un chiffre entre 3 et 1
int nbgen = rand()%3+1;
//Si on obtient 1, on lance l'écran statique
if(nbgen == 1){
StatScreen();
}

//Si on obtient 2, on lance l'écran dynamique
else if(nbgen == 2){
Dynascreen();
}

//Si on obtient 3, on lance l'écran interactif
else if(nbgen == 3){
printf("%d\n", nbgen);
}

}

