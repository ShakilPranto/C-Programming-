#include <stdio.h>
void calculateprice(float value);
int main()
{
    float value;
    printf("Enter a price:");
    scanf("%f",&value);
    calculateprice(value);
    return 0;
}
void calculateprice(float value)
{
    value=value+(0.18*value);
    printf("Final price is : %.2f",value);
}