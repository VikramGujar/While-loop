// Write a C program to find the given number is a step number or not.
// If the adjacent digit difference is 1 then it is a step number.
// Example as: 1234
// o/p : It is a step number.
// Test cases you have to check: 
// 1234, 4321, 5432, 3210,10 are step numbers.
// 1001,12234 are not step numbers.

#include<stdio.h>
int main()
{
    int num,rem1,rem2;
    printf("Enter a number :");
    scanf("%d",&num);

    while (num!=0)
    {
        rem1=num%10;
        num=num/10;
        num=num/10;
        rem2=num%10;
        if(rem1-rem2==1 || rem2-rem1==1)
        {
            rem1=rem2;
        }else{
                printf("IS NOT Step no.");
                return 0;
        }
    }
    printf("IS Step no.");

    

}
