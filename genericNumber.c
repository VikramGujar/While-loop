// Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.

// [if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8] 
// Input as : 5678
// Ouput as : 8


#include<stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number to check: ");
    scanf("%d", &num);

    while (num > 9) {
        sum = 0;
   
        while (num != 0) {
            sum += num % 10; 
            num /= 10; 
        }
        num = sum;  
    }

    printf("\nThe generic number is %d\n", num);

    return 0;
}
