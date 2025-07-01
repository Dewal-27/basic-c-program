//dewal
// write a program to add two numbers using function with arguments and return value.
#include<stdio.h>
void addTwonumbers(int a, int b );
int main()
{
    int num1 , num2, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    addTwonumbers(num1, num2);
    
    return 0;
}
void addTwonumbers(int a, int b)
{
    int sum = a+b;

    printf("the sum of %d and %d is %d", a, b, sum);
    
}