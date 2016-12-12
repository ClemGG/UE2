#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int nbgen = rand()%3+1;
	printf("%d\n", nbgen);
	return 0;
}
