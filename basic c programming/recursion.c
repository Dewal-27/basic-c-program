// dewal
// sum of natural number using recursion
#include<stdio.h>
int sumofnaturalnumbers(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + sumofnaturalnumbers(num -1);
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf(" sum = %d", sumofnaturalnumbers(num));
    return 0;
}