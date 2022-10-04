#include <stdio.h>

typedef struct student {
	char name[20];
	int age;
}STUDENT;

void input(STUDENT s[], int size) {
	int i;
	for (i = 0; i < 3; i++) {
		printf("\n----------------------------\n");
		printf("이름 입력:");scanf("%s",&s[i].name);
		printf("나이 입력:");scanf("%d",&s[i].age);
		printf("\n----------------------------\n");
    }
}

int main(void) {
	STUDENT s[3];
	int menu;
	for(;;) {
		printf("메뉴 선택:\n1.입력\n2.출력\n3.break.\n선택>>>");
		scanf("%d", &menu);

		if(menu==1) input(s,3);
		if(menu==2) {

			int i;
			printf("\n----------------------------\n");
			printf("\n-%15s %5s-\n", "성명", "나이");			
			printf("\n----------------------------\n");

			for (i = 0; i < 3; i++) {
				printf("이름: %15s %-5d\n",s[i].name, s[i].age);
				printf("----------------------------\n");
			}
		}
			
		if(menu==3) break;
	}
	
	return 0;

}

