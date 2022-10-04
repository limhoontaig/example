#include <stdio.h>

typedef struct student {
	char name[20];
	int age;
}STUDENT;

STUDENT input() {
	STUDENT stu;
	printf("\n----------------------------\n");
	printf("이름 입력:");scanf("%s",&stu.name);
	printf("나이 입력:");scanf("%d",&stu.age);
	printf("\n----------------------------\n");
    return stu;
}

void output(STUDENT stu) {
	printf("\n----------------------------\n");
	printf("이름: %s\n",stu.name);
	printf("나이: %d\n",stu.age);
	printf("\n----------------------------\n");
}

int main(void) {
	STUDENT s;
	int menu;
	while(1) {
		printf("메뉴 선택:\n1.입력\n2.출력\n3.break.\n선택>>>");
		scanf("%d", &menu);

		if(menu==1) s=input();
		if(menu==2) output(s);
		if(menu==3) break;
	}
	return 0;

}

