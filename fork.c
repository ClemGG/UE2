#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include "fork.h"

//Duplique le processus et donne le PID du processus fils créé
pid_t create_process(void){

pid_t pid;
	//On fork() tant que le processus fils n'est pas créé
	do{
	pid = fork();
	} while ((pid == -1) && (errno == EAGAIN));
	//On retourne son PID
	return pid;
}
//Cette fonction s'exécute lorsque l'on a réussi le fork(), et lorsque nous sommes rentrés dans le procesus fils
void child_process(void){

printf("Nous entrons dans le processus fils.\n");
sleep(1);
printf("Le PID du processus fils est: %d.\n", (int) getpid());

}

//Cette fonction s'exécute lorsque l'on a réussi le fork(), et lorsque nous sommes rentrés dans le procesus fils
void father_process(int child_pid){

printf("Nous quittons le processus père.\n");
sleep(1);
printf("Le PID du processus père était: %d.\n", (int) getpid());

}
