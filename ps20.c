//write a c program to print weekdays using elseif
#include<stdio.h>
int main()
{
  int a;
  printf("enter the value of a=");
  scanf("%d",&a);
  if(a==1)
{
  printf("\n monday");
}
else if (a==2)
 {
  printf("\n tuesday");
}
else if (a==3)
{
  printf("\n wednesday");
}
else if (a==4)
 {
  printf("\n thursday");
}
else if (a==5)
 {
  printf("\n friday");
}
else if (a==6)
{
  printf("\n saturday");
}
else if (a==7)
{
  printf("\n sunday");
}
else
{
   printf("\n Invalid value");
}
}
