#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter the two numbers to be swapped : \n");
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("The numbers after being swapped : \na = %d b = %d", a, b);
  return 0;
}
