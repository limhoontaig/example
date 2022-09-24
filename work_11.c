/* Program to Check Vowel or Consonant */

#include <stdio.h>

int main() {

    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluate to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluate to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluate to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
	printf("%c is a vowel.\n", c);
    else 
	printf("%c is a consonant.\n", c);

    return 0;
 
}

