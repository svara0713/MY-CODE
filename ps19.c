//write a c program to find maximum number using conditional operator.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the value of a=");
  scanf("%d",&a);
  printf("enter the value of b=");
  scanf("%d",&b);
  a=7,b=3;
  c=(a>b)? a:b;
  printf("%d is larger than %d",c,b);
}
