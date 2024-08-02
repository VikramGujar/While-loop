// Write a C program to check the given number is a perfect number or not?

// If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

// 6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

// 6 is a perfect number.

#include<stdio.h>
int main()
{
    int num,checkNum=0,orignal;
    printf("Enetr a number: ");
    scanf("%d",&num);
    orignal=num;

    while (num)
    {
        if(orignal%num==0){
            checkNum = checkNum+num;
        }
        num--;
    }
    checkNum = checkNum-orignal;
    if(checkNum==orignal)
    {
        printf("Perfect Number");
    }else{
        printf("Not Perfect number");
    }
    
    
}