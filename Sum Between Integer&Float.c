#include <stdio.h>
int main ()
{
int a;
printf("Enter Integer Number: ");
scanf("%d",&a);
float b,sum;
printf("Enter Float Number: ");
scanf("%f",&b);
sum=a+b;
printf("%.2f",sum);
return 0;
}