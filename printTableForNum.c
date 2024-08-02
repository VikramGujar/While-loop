// Write a C program that prompts the user to enter a number and then prints the
//  multiplication table for that number using a while loop.

#include<stdio.h>
int main()
{
    int num,table=0,tn=10;
    printf("Enter a number \n");
    scanf("%d",&num);

    while (tn)
    {
        table = table+ num;
        printf("%d \n",table);
        tn--;
    }
    
}