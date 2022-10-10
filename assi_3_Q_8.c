#include<stdio.h> // to check leap year
int main()
{
 int a;
 printf("enter the year:");
 scanf("%d",&a);
  a%100==0?a%400==0?printf("leap year"):printf("not leap year"): a%4==0?printf("leap year"):printf("not leap year");
 return 0;
}
