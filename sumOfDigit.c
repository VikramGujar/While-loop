// Write a C program that asks the user to input a three-digit integer and calculates 
// the sum of its digits. Using While loop.


#include<stdio.h>
int main()
{
    int num;
    int rem,sum=0;
    printf("Enter a three didgit number\n");
    scanf("%d",&num);
    
    while(num)
    {
        rem = num % 10;
        sum+=rem;
        num = num/10;
    }
    printf("Sum = %d",sum);

    return 0;
    
}