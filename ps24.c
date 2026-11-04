//write a c program to print 1 to n numbers of values using while loop.
#include<stdio.h>
void main()
{
  int i,n;
  i=1;
  printf("enter n:");
  scanf("%d",&n);
  while(i>=n)
{
  printf("%d\n",i);
i=i+1;
}
}
