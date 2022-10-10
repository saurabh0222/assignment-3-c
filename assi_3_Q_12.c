#include<stdio.h>
 int main()
 {
  char a;
  printf("enter any alphabet in lower or upper case: ");
  scanf("%c",&a);
  if(a>64&a<91)
   printf("\nupper case");
  if(a>96&a<123)
   printf("\nlower case");
   return 0;
 }
