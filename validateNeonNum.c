// Write a C program that takes a number as input from the user and determine whether
//  the number is a neon number or not. Develop it by using while loop.

// A Neon number is a number is a number where the sum of digits of square of the 
// number is equal to the number itself.

// For Example :

// 9 is a Neon number . Its square is 9*9 = 81 and sum of the digits 8+1 = 9 .So both are equal.


#include<stdio.h>
int main()
{
    int num,rem,sum=0,sqr=1;
    printf("Enter a number :");
    scanf("%d",&num);
    
        sqr=num*num;
        while (sqr)
        {
            rem=sqr%10;
            sum+=rem;
            sqr=sqr/10;
        }
    
    if (sum==num)
        {
            printf("\nThe no. is Neon");
        }else{
            printf("\nThe no. not is Neon");
        }
    
}