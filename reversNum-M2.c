// Write a C prgram that asks the user to input an integer and reverse that number and display
//  the reverse of that given number.



#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enetr a number to check: ");
    scanf("%d",&num);

    while (num!=0)
    {
        rem = num %10;
        rev=rev*10+rem;
        num=num/10;

    }
    printf("\n Revers number is : %d",rev);
}