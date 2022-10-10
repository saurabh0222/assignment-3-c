#include<stdio.h>
 int main()
 {
  char a;
  printf("enter to know ascii code: ");
  scanf("%c",&a);
    if(a>64&a<91)
   printf("\nupper case alphabet");
  if(a>96&a<123)
   printf("\nlower case alphabet");
  (a>47&a<58)?printf("\ndigit"):printf("\nspecial character");
 return 0;

 }
