#include<stdio.h>
int main()
{
 int a,b,c,d; // a,b,c are sides of the traingle,d is the longest side
 printf("enter three sides: \n");
 scanf("%d%d%d",&a,&b,&c);
  d=a>b?c>a?c:a:b>c?b:c;
 (d<a+b+c-d)?printf("triangle is possible"):printf("triangle is not possible");
return 0;

}
