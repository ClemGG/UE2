#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Default.c"
#define ACTUALISATION 7
#define CENTER 6

char timeString[7];

void loadingBar();
void tUpdate();

int main(){
	char c;
	int i, j = CENTER;
	system("clear");
	xySlide(0,-9);

	while(c == 0){

		printFile('c',0,33);
		printFile('c',0,44);

		tUpdate();
		for(i=0; i<6; i++){
			if(i == 2 || i == 4){j++;}
			printFile('n',timeString[i]-'0',j*4);
			j++;
		}
		j = CENTER;
		loadingBar();
	}

	return 0;
}

void tUpdate(){
	time_t current_time;
	struct tm * time_info;

	time(&current_time);
	time_info = localtime(&current_time);

	strftime(timeString, sizeof(timeString), "%H%M%S", time_info);
}

void loadingBar(){
	int i;
	xySlide(-80,-30);
	printf("Actualisation ");
	for(i=0; i<ACTUALISATION; i++){
		printFile('c',1,i);
		xySlide(0,-4);
		sleep(1);
	}
	xySlide(-80,13);
	printf("\033[2J");
}
