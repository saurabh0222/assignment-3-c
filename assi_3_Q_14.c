#include<stdio.h>
int main()
{
 int a;
 printf("enter a number:");
 scanf("%d",&a);
 if(a%3==0|a%7==0)
  printf("\n%d is divisible by 3 or 7 or both",a);
 else
  printf("\n%d is neither divisible by 3 nor 7",a);
 return 0;
 }
