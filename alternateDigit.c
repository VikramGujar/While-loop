// Write a C program to find the alternate digit sum is same or not.



// Example-1 as: 12345



// 1+3+5=9

// 2+4=6



// Output as: Alternate digit sum is not same.



// Example-2 as: 12122

// 1+1+2=4

// 2+2=4



// Output as : Alternate digit sum is same.

#include<stdio.h>
int main()
{
    int num,rem1,rem2,sum1=0,sum2=0;
    printf("Enter a number :");
    scanf("%d",&num);

    while (num)
    {
        rem1=num%10;
        num=num/10;
        rem2=num%10;
        num=num/10;
        sum1=sum1+rem1;
        sum2=sum2+rem2;
    }
    if (sum1==sum2)
    {
        printf("Aletrnate sum equal");
    }else{
        printf("Aletrnate sum not equal");
    }
    
    

}