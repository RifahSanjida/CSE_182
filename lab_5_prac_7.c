//7. Write a C program to enter any number and print its prime factors.
#include <stdio.h>
int main() {
  int n, num, i, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (num = 2; num <= n; num++) {

    for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        count++;
        break;
       }
    }

    if (count == 0 && num != 1) {
      printf("%d ", num);
    }
  }
  return 0;
}
