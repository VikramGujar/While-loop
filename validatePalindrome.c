// Write a C program to check if a given number is a palindrome. A palindrome is 
// a number that remains the same when its digits are reversed.
//  For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user
//  to enter a positive integer and determine whether it is a palindrome or not.


#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enetr a number to check: ");
    scanf("%d",&num);

    int m=num;
    
    while (num!=0)
    {
        rem = num %10;
        rev=rev*10+rem;
        num=num/10;

    }
    if(rev==m)
    {
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }
    
}
