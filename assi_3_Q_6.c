#include<stdio.h>
int main()
{
 int a,b;
 printf("enter two numbers :");
 scanf("%d\t%d",&a,&b);
  if(a>b)
    printf("\n%d is greater ",a);
  if(b>a)
    printf("\n%d is greater ",b);
  if(a=b)
    printf("\n both numbers are %d",a);
 return 0;
}
