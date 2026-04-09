#include <stdio.h>
int main ()
{
int marks;
printf("Enter your marks (0-100): ");
scanf("%d",&marks);
if(marks>=80 && marks<=100)
{
    printf("Grade: A+\n");
}
else if(marks>=75)
{
    printf("Grade: A\n");
}
else if(marks>=70)
{
    printf("Grade: A-\n");
}
else if(marks>=65)
{
    printf("Grade: B+\n");
}
else if(marks>=60)
{
    printf("Grade: B\n");
}
else if(marks>=50)
{
    printf("Grade: C\n");
}
else if(marks>=40)
{
    printf("Grade: D\n");
}
else
{
    printf("Grade: F\n");
}
return 0;
}