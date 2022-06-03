#include <stdio.h>
/*
Write a fizzbuzz.c program that outputs numbers from 1 to 100.
But for multiples of 3, print Fizz instead of the number 
and for the multiples of 5, print Buzz. 
For numbers which are multiples of both 3 and 5, print FizzBuzz.
*/
/*
% - modulo operator revision:
if i % 2 = 0 then it is an even number
if i % 2 = 1 then it is an odd number
if i % number = 0 then i is divisible by that number
*/

int main()
{
  for (int i = 1; i <= 100; i++)
  {
    //print FizzBuzz if a number is divisible by 15; number divisible by 3 and 5 will always be divisible by 15
    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("FizzBuzz\n");
    } 
    //print Fizz if a number is divisible by 3
    else if (i % 3 == 0)
    {
      printf("Fizz\n");
    }
    //print Buzz if a number is divisible by 5
    else if (i % 5 == 0)
    {
      printf("Buzz\n");
    }
    else
    {
      printf("%d\n", i);
    }
  }
  return 0;
}