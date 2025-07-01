
//dewal
// write a program to add two numbers using function with arguments and return value.
#include<stdio.h>
int add(int a, int b );
int main()
{
    int num1 , num2, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = add(num1, num2);
    printf("the sum of %d and %d is %d", num1, num2, sum);
    return 0;
}
int add(int a, int b)
{
    return a+b;
}