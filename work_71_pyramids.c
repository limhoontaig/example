/* to Print Pyramids and Patterns */

#include <stdio.h>

int main() {
   int i, j, rows;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   printf("\n");
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");

   }

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }

   int k = 0, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }

   int count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }

   int coef = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }

   int number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("\n");
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }

   return 0;
}

