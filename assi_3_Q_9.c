#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter three numbers: ");
 scanf("%d%d%d",&a,&b,&c);
  a>b?c>a?printf("%d",c):printf("%d",a): b>c?printf("%d",b):printf("%d",c);
 return 0;

}
