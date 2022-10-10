#include<stdio.h>// to find roots of quadratic equation
int main()
{
 float a,b,c,D,R1,R2,realpart,imagpart;
 printf(" Quadratic equation is in the form of ax^2+bx+c=0, so enter coefficients a,b,and c : ");
 scanf("%f %f %f",&a,&b,&c);
 D=(b*b-4*a*c);
  if(D>0)
  {
   R1=(-b+sqrt(D))/2*a;
   R2=(-b-sqrt(D))/2*a;
   printf("\n roots are real and distict\n R1=%.2f and R2=%.2f",R1,R2);
  }
  if(D==0)
  {
   R1=R2=-b/2*a;
   printf("\n roots are real and equal\n R1=R2=%.2f");
  }
  if(D<0)
  {
   realpart=-b/(2*a);
   imagpart=sqrt(-D)/(2*a);
   printf("\n roots are imaginary \nR1=%.2f+%.2fi and R2=%.2f-%.2fi",realpart,imagpart,realpart,imagpart);
  }
  return 0;
}
