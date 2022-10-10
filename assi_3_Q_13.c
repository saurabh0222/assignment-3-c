#include<stdio.h>
int main()
{
 int a;
 printf("enter a number: ");
 scanf("%d",&a);
 if(a%6==0)
  printf("\n%d is divisible by 2 and 3 both",a);
 else
  printf("\n%d is not divisible by 2 and 3 both",a);
  return 0;
}
