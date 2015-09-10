#include <stdio.h>

void swap (int, int);

int main() {
  int num1=5, num2 = 10;
  printf("num1=%d and num2=%d",num1,num2);
  swap(num1,num2);
  printf("num1 %d and num2 %d",num1,num2);
}

void swap (int a, int b) {
  a=a+b;
  printf("%d\n",a);
  b=a-b;
  a=a-b;
}
