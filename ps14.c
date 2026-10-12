//write a c program to check the smallest number from 2 integer number and number must be entered by user.
#include<stdio.h>
int main()
{
  int a,b;
 printf("enter the value of a=");
 scanf("%d",&a);
 printf("enter the value of b=");
 scanf("%d",&b);
if(a<b)
{
   printf("%d is smaller than %d",a,b);
}
else
{
   printf("%d is smaller than %d",b,a);
}
}
