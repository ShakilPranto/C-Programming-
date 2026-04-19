#include <stdio.h>

int main()
{
    int n, i;
    int present = 0, absent = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int attendance[n];
    
    printf("Enter attendance (1 for Present, 0 for Absent):\n");
    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
        
        if(attendance[i] == 1)
        {
            present++;
        }
        else if(attendance[i] == 0)
        {
            absent++;
        }
        else
        {
            printf("Invalid input! Use 1 or 0.\n");
            i--;
        }
    }
    
    printf("Total Present Students: %d\n", present);
    printf("Total Absent Students: %d\n", absent);
    
    return 0;
}