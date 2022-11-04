#include <stdio.h>
struct member{
	char data1[10];
	char data2[10];
};
int main(void){
	struct member m[5];
	int i;
	FILE *f;
	f=fopen("data.txt","r");
	fscanf(f,"%s %s\n",&m[0].data1, &m[0].data2);
	fscanf(f,"%s_%s\n",&m[1].data1, &m[1].data2);
	fscanf(f,"%s@%s\n",&m[2].data1, &m[2].data2);
	fscanf(f,"%s,%s\n",&m[3].data1, &m[3].data2);
	fclose(f);
	for(i=0;i<4;i++)
		printf("%s %s\n",m[i].data1, m[i].data2);
	return 0;
}
