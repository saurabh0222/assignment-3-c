#include<stdio.h>
int main()
{
 int a;
 printf("enter the month number:\n");
 scanf("%d",&a);
  if(a==1|a==3|a==5|a==7|a==8|a==10|a==12)
  printf("31 days");
  else if(a==4|a==6|a==9|a==11)
    printf("30 days");
  else if(a==2)
    printf("leap year 29 days\nnot leap year 28 days");
  else
    printf("invalid month number");
 return 0;
}
