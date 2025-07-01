//dewal
//display fibonaccii series using recursion
#include<stdio.h>

int fibonaccii(int num)
{
    if ( num <= 1)
    {
        return num;
    }
    return fibonaccii(num -1) + fibonaccii(num - 2);
}
int main()
{
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    
    for (i = 0; i <= num; i++);
    {
        printf("%d\t", fibonaccii(i));
    }
    return 0;
}