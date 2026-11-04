//write a c program of while loop and use it to print 1 to 10.
#include<stdio.h>
void main()
{
  int i,n;
  i=1;
  printf("enter n:");
  scanf("%d",&n);
  while(i<=n)
{
   printf("%d\n",i);
   i++;
}
}
