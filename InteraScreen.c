#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"
#include "Historique.c"

int main(){

	system("clear");

	char c;

	int AvionX=rng(70);
	int AvionY=-rng(25);
	Historique(3,AvionX,AvionY);
	xySlide(0,AvionY);
	printFile('a',rng(3),AvionX);

	while(c != 'q'){
		//xySlide(-80,-30);
		c = getchar();
		if(c == 'h'){
			system("clear");
			AvionX++;
			xySlide(AvionX,AvionY);
			printFile('a',1,AvionX);
		}
		else if (c == 'f'){
			system("clear");
			AvionX--;
			xySlide(AvionX,AvionY);
			printFile('a',3,AvionX);
		}
		else if (c == 'g'){
			system("clear");
			AvionY--;
			xySlide(AvionX,AvionY);
			printFile('a',2,AvionX);
		}
		else if (c == 't'){
			system("clear");
			AvionY++;
			xySlide(AvionX,AvionY);
			printFile('a',0,AvionX);
		}
	}
	xySlide(-80,0);
	system("clear");
}
