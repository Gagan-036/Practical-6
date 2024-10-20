#include <stdio.h>

int main() {

  printf("Enter a number: \n");
  int num;
  scanf("%d", &num);
int n=0;
  if (num == 2 || num == 1) {
    printf("prime number");
  }

  for (int i = num - 1; i > 1; i--) {

    // printf("NUMBER IS %d\n", num);
    // printf("PREV NUM IS %d \n", i);
    if (num % i == 0) {
      // printf("not an Prime number");
      n=1;
      break;

      
    } 

  
  }
if(n==1){
  printf("Not an Prime number");
}
  else{
    printf("prime number");
  }
  return 0;
}
