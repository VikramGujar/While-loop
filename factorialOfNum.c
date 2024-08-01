// write a C program to find the factorial of a given number. Take the input from the user.

#include<stdio.h>
int main()
{
    int num,factorial=1;
    printf("Enter a number");
    scanf("%d",&num);

    while (num)
    {
        factorial = factorial * num;
        num--;
    }
    printf("Factorial is %d",factorial);
}