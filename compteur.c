#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int Compteur(){

int compteur = 10;

printf("%d\n", compteur);

while(compteur != 0){

sleep(1);
compteur = compteur - 1;
printf("%d\n", compteur);
}

}

