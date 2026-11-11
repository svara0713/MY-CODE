//write a c program to print odd number between 1 to n numbers using for loop.\
#include<stdio.h>
void main()
{
  int i,n;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i+=2)
{ 
  printf("%d\n",i);
}
}
