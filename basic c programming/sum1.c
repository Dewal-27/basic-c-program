//dewal
//wap to find sum of two numbers using function with no argument and with return values
#include<stdio.h>
int sum()
{
    int x, y, s=0;
    printf("enter number x and y\n");
    scanf("%d %d", &x, &y);
    s = x + y;
    return s;
}
int main()
{
    printf("Sum of x and y is %d", sum());
    return 0;
}

