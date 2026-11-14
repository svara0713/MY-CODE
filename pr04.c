//write a c program that reads two numbers from keyboardand perform their addition,subtraction,multiplication,division.display answers of all operations shows type conversion in division operation.
#include<stdio.h>
int main()
{
  int a,b;
  float c;
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  c=a+b;
  printf("addition is : %d+%d=%.2f\n",a,b,c);
  c=a-b;
  printf("subtraction is : %d-%d=%.2f\n",a,b,c);
  c=a*b;
  printf("multiplication is : %d*%d=%.2f\n",a,b,c);
  c=(float)a/b;
  printf("division is : %d/%d=%.2f\n",a,b,c);
}
