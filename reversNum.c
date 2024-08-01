// Write a C prgram that asks the user to input an integer and reverse that number and display
//  the reverse of that given number.


#include<stdio.h>
int main()
{
    int num,rem =0;
    
    printf("Enter a number\n");
    scanf("%d",&num);

    while(num)
    {
        rem = num%10;
        printf("%d",rem);
        num =num/10;
    }
    
}