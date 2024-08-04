// Write a C program that takes a number as input from the user and determines whether it is
//  a spy number of not, DEVELOP this by using while loop.
// A Spy number is a number where the sum of its digits is equal to its product of its digits.
// For Example :
// 1124 is a spy number , because the sum of its digits
//  is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..

#include<stdio.h>
int main()
{
    int num,rem,sum=0,mul=1;
    printf("Enter a number :");
    scanf("%d",&num);

    while (num)
    {
        rem = num %10;
        sum = sum + rem;
        mul = mul * rem;
        num = num /10;
    }
    if (sum==mul)
    {
        printf("\nIts SPY no.");
    }else{
        printf("\nIts not SPY no.");
    }
    return 0;
    
}