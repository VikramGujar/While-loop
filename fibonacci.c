// Write a C program to generate the Fibonacci sequence up to a given times using a while loop.
//  The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.

#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextNum = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextNum = t1 + t2;

  while (nextNum <= n) {
    printf("%d, ", nextNum);
    t1 = t2;
    t2 = nextNum;
    nextNum = t1 + t2;
  }

  return 0;
}
