/* argument and parameter */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* env[]) {

    // printf("인수의 개수: %d \n", argc);
    //for (int i; i<argc; ++i)
	//printf("[%d] ==> %s \n", i, argv[i]);

    //printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1]) + atoi(argv[2]));
  
    printf("%s \n", getenv("LANG"));
    for (int i=0; env[i]; ++i) {
	printf("%s \n", env[i]);
    }

 

    return 0;
}

