#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "alea.h"



int alea(){

	srand(time(NULL));
	int nbgen = rand()%3+1;
	printf("%d\n", nbgen);
	return 0;
}
