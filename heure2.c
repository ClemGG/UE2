#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

char buffer[256];
time_t timestamp = time(NULL);

strftime(buffer, sizeof(buffer), "%A %d %B %Y - %X.", localtime(&timestamp));
printf("%s\n", buffer);

return 0;
}

