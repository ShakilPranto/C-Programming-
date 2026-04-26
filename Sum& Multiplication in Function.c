#include <stdio.h>
int sum(int a,int b);
int multi(int a, int b);
int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    int s=sum(a,b);
    int m=multi(a,b);
    printf("Sum is : %d\n",s);
    printf("Multiplication is : %d\n",m);
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}
int multi(int x,int y)
{
    return x*y;
}
