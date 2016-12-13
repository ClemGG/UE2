
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "StatScreen.c"

int main(){
//On initialise la fonction srand()
srand(time(NULL));
//On génère un chiffre entre 3 et 1
int nbgen = rand()%3+1;

if(nbgen == 1){
StatScreen();
}

else if(nbgen == 2){
printf("%d\n", nbgen);
}

else if(nbgen == 3){
printf("%d\n", nbgen);
}

}

