#include <stdio.h>

int main() {

  printf("Enter a number: \n");
  int num;
  scanf("%d", &num);
  int n = 0;
  if (num == 2 || num == 1) {
    printf("prime number");
  }

  for (int j = num; j > 1; j--) {

    for (int i = j - 1; i > 1; i--) {
      n=0;
      if (j % i == 0) {

        n = 1;
        break;
      }
    }

    if (n == 1) {
      printf("%d is Not an Prime number\n", j);
    } else {
      printf(" %d is a prime number\n", j);
    }
  }

  return 0;
}
