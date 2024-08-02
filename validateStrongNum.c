// Write a C program to check if a given number is a strong number. 
// A strong number is a positive integer in which the sum of the 
// factorial of its digits is equal to the number itself. For example,
//  145 is a strong number since 1! + 4! + 5! = 145. 
// The program should prompt the user to enter a 
// positive integer and determine whether it is a strong number or not.

#include<stdio.h>
int main()
{
    int num,factorial=1,sum=0,orignal,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    orignal=num;

    while (num!=0)
    {
        rem = num%10;
        while (rem)
        {
            factorial=factorial*rem;
        }
        sum=sum+factorial; 
        num=num/10;  
    }
    if (orignal==sum)
    {
        printf("\n Strong number");
    }else{
        printf("\n Not Strong number");
    }
    
}