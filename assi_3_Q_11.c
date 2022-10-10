#include<stdio.h>
int main()
{
 int i;
 float m;
 for(i=1;i<6;i++)
 {
  printf("\nenter marks of student %d: ",i);
  scanf("%f",&m);
   m<33?printf("\nstudent %d is fail",i):printf("\nstudent %d is pass",i);
 }
 return 0 ;

}
