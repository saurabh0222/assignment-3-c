#include<stdio.h> // to calculate profit and loss percentage
int main()
{
 float CP,SP;
 printf("enter cost price and selling price: ");
 scanf("%f%f",&CP,&SP);
 SP>=CP?printf("profit percent is %.2f",(SP-CP)*100/CP):printf("loss percent is %.2f",(CP-SP)*100/CP);
 return 0;
}
