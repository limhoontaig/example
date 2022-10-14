#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.c"

struct userInfo tmp[3];

void createStruct() {
	strcpy(tmp[0].name, "apple mango");
	strcpy(tmp[0].sex, "ma");
	tmp[0].age = 26;

	strcpy(tmp[1].name, "banana cherry");
	strcpy(tmp[1].sex, "ma");
	tmp[1].age = 30;

	strcpy(tmp[2].name, "charles chepplin");
	strcpy(tmp[2].sex, "fe");
	tmp[2].age = 25;
}

int main() {
	FILE *f;
	struct userInfo buf[3];
	
	createStruct(); //초기화
	
	if((f = fopen("userInfo.dat", "w")) == NULL) {
		printf("cannot open file for writing.\n");
		exit(1);
	}

	fwrite(tmp, sizeof(struct userInfo), 3, f);
	fclose(f);
	
	if((f = fopen("userInfo.dat", "r")) == NULL) {
		printf("cannot open file for reding.\n");
		exit(1);
	}

	fread(buf, sizeof(struct userInfo), 3, f);
	int i;
	for(i = 0; i<3; i++) {
		printf("name = %-20s, sex = %3s, age = %3d\n", buf[i].name, buf[i].sex, buf[i].age);
	}
	
	fclose(f);
	return 0;
}
