#include <stdio.h>
int main ()
{
float balance,bonus=0;
char gender;
Printf("Enter account balance: ");
scanf("%f",&balance);
Printf("Enter gender(M/F): ");
scanf("%c",&gender);
bonus=balance*0.02;
if(gender=='F'||gender=='f')
{
    if(balance>50000)
    {
        bonus=bonus+(balance*0.05);
        printf("\n Female account holder with balance > 50000\n");
         printf("Extra 5 percent bonus is applied\n");
    }
}
printf("Bonus Summary\n");
printf("Original balance: Tk. %.2f\n",balance);
printf("Total Bonus: Tk. %.2f\n",bonus);
printf("New Balance: Tk. %2f\n",balance+bonus);
return 0;
}
