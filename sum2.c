//dewal
//wap to fimd sum using function(no arguments no return)
#include<stdio.h>

void sum()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("sum = %d", num1 + num2);
}
int main()
{
    sum();
    return 0;
}