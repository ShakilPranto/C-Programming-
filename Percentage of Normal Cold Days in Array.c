#include <stdio.h>

int main()
{
    int days = 10, i;
    int hotDays = 0, normalDays = 0;
    float normalPercentage;
    
    int temperature[10];
    
    printf("Enter temperature for 10 days (in Celsius):\n");
    for(i = 0; i < days; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &temperature[i]);
        
        if(temperature[i] > 24)
        {
            hotDays++;
        }
        else
        {
            normalDays++;
        }
    }
    
    normalPercentage = (float)normalDays / days * 100;
    
    printf("\nTotal Hot Summer Days (above 24°C): %d\n", hotDays);
    printf("Total Normal Cold Days (24°C or below): %d\n", normalDays);
    printf("Percentage of Normal Cold Days  : %.2f%%\n", normalPercentage);
    
    return 0;
}