//write a c program to print addition , subtraction , multiplication and division of a two integer value.
#include<stdio.h>
int main()
{
  int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);

c=a+b;
printf("addition is : %d+%d=%d",a,b,c);

c=a-b;
printf("subtraction is : %d-%d=%d",a,b,c);

c=a*b;
printf("multiplication is : %d*%d=%d",a,b,c);

c=a/b;
printf("division is : %d/%d=%d",a,b,c);
}
