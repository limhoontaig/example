#include <stdio.h>

void main (void) {

    char*student[3] = {"aaa", "bbb", "ccc"};

    printf("student: %p student[0]: %p \n", student, student[0]);
    for (int i=0; i<3; ++i){
	
	printf("student[%d]: %p %s\n", i, student[i],student[i]);
	printf("student+%d: %p %s\n", i, student+i,*(student+i));
    }
}

