#include <stdio.h>

int main() {
    char sample_space[30];
    char *p = sample_space;

    printf("텍스트를 입력하세요 공백을 포함하여 : ");
    scanf("%[^\n]s", p);

    printf("\n %s \n", sample_space);

    char str_a[] ="abc";
    char *a = str_a;
    //*a = "a";
    char str_b[] = "abc";
    char *b = str_b;
    //*b = "a";
    if (str_a == str_b) {
        printf("\n same %p %p \n", a, b);
    } else {
        printf("\n different  %s %s \n", str_a, str_b);
        
    }

    return 0;
}