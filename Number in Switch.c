#include <stdio.h>
int main ()
{
int i;
printf("Enter a number(1-5): ");
scanf("%d",&i);
switch(i)
{
    case 1:
    printf("One\n");
    break;
    case 2:
    printf("Two\n");
    break;
    case 3:
    printf("Three\n");
    break;
    case 4:
    printf("Four\n");
    break;
    case 5:
    printf("Five\n");
    break;
    default:
    printf("Unrecognized number\n");
} 
return 0;
}