#define _CRT_SECURE_NO_WARNINGS   // Visual Studio
#include <stdio.h>
#define MAX	100

struct student {
	char name[20];          // 이름
	int kor, eng, mat;      // 국어, 영어, 수학
};

int read_file(struct student list[], int* n)   // n: 인원수
{
	FILE* fp;
	int i = 0;
    fp = fopen("data.txt", "r");

	if (fp == NULL)
	{
		printf("File read error...\n");
		return -1;
	}

	while (!feof(fp))
	{
		fscanf(fp, "%s %d %d %d",
			list[i].name, &list[i].kor, &list[i].eng, &list[i].mat);
		printf("%-12s %5d %5d %5d \n",
			list[i].name, list[i].kor, list[i].eng, list[i].mat);
        i++;
	}
	*n = i;
	fclose(fp);
}

void print(struct student list[], int n)
{
	int i, tot, ttot = 0;

	printf("\n이름      국어 영어 수학   평균\n");
	printf("--------------------------------\n");
	for (i = 0; i < n; i++)
	{
		tot = list[i].kor + list[i].eng + list[i].mat;
		ttot += tot;
		printf("%-10s %3d  %3d  %3d  %6.2f\n",
			list[i].name, list[i].kor, list[i].eng, list[i].mat,
			((float)tot / 3));
	}
	printf("--------------------------------\n");
	printf("전체 평균 : %.2f\n", (float)ttot / (3 * n));
}

int main()
{
	struct student list[MAX];
	int n = 0;	// 인원수

	read_file(list, &n);
	print(list, n);

	return 0;
}