// Write a C program to add all the natural number from 1 to n.
//  Ask the user to give n value and print the addition value.


#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    while (num)
    {
       sum = sum + num--;
    }
    printf("Sum of natural number is %d",sum);
    

}