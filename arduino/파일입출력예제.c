#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct member {	
    char name[10];
    int age;
    char sex[3];
    char city[10];
};

int main(){	
    struct member m[3];	
    int i;	
    FILE *f;	
    strcpy(m[0].name,"홍길동");	
    m[0].age=15;	
    strcpy(m[0].sex,"남");	
    strcpy(m[0].city,"광주");	
    strcpy(m[1].name,"김철수");	
    m[1].age=19;	
    strcpy(m[1].sex,"남");	
    strcpy(m[1].city,"대구");	
    strcpy(m[2].name,"김태희");	
    m[2].age=20;	
    strcpy(m[2].sex,"여");	
    strcpy(m[2].city,"경상");
    printf("구조체에 입력된 자료\n");	
    for(i=0;i<3;i++)	
    printf("%s %d %s %s\n",m[i].name,m[i].age, m[i].sex, m[i].city);	
    f=fopen("a.txt","w");		
    for(i=0;i<3;i++)	
    fprintf(f,"%s %d %s %s\n",m[i].name,m[i].age, m[i].sex, m[i].city);		
    fclose(f);	
    return 0;}
//출처: https://itng.tistory.com/145 [IT & G:티스토리]