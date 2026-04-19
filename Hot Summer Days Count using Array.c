#include <stdio.h>

int main()
{
    int days = 10, i;
    int hotDays = 0;
    
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
    }
    
    printf("\nTotal Hot Summer Days: %d\n", hotDays);
    
    return 0;
}