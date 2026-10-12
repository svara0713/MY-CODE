//write a c program to print the marks.
#include<stdio.h>
int main()
{
  int m1,m2,m3;
  float avg;
  printf("enter the value of number=");
  scanf("%d",&m1);
  printf("enter the value of number=");
  scanf("%d",&m2);
  printf("enter the value of number=");
  scanf("%d",&m3);
avg = float(m1,m2,m3)/3;
if(avg>=80&&avg<=100)
{
  printf("A grade");
}
else if (avg>=60&&avg<80)
{
   printf("B grade");
}
else if (avg>=50&&avg<60)
{
   printf("C grade");
}
else if (avg>=40&&avg<50)
{
   printf("D grade");
}
else if (avg>=0&&avg<40)
{
   printf("FAIL");
}
else
{
   printf("INVALID VALUE");
}
}
