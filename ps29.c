//write a c program to print descending value as per user choice.
#include<stdio.h>
void main()
{
  int i,n;
  printf("enter the value of i:");
  scanf("%d",&i);
  printf("enter the value of n:");
  scanf("%d\n",&n);
  while(i>=n)
{
  printf("%d\n",i);
  i--;
}
}
