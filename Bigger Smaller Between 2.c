#include <stdio.h>
int main ()
{
float a,b;
printf("Enter the first number: ");
scanf("%f",&a);
printf("Enter the second number: ");
scanf("%f",&b);
if(a>b)
{
printf("%.2f is bigger\n",a);
printf("%.2f is smaller\n",b);
}
else if (b>a)
{
printf("%.2f is bigger\n",b);
printf("%.2f is smaller\n",a);
}
else
{
  printf("Both are equal\n");  
}
return 0;
}