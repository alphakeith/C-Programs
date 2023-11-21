/*Write a program that takes an integer as input from the user
  and uses a while loop to count down from that number to 1,
  printing each number in the countdown.*/

 /*The while loop is used when the number of iterations is
   not known beforehand and depends on a condition.
   The loop continues as long as the specified condition is true.*/

#include<stdio.h>

int main()
{

    int number;

    printf("Enter a Number: ");
    scanf(" %i", &number);

    /*while(condition) {
        code to be repeated
    }*/

    while(number >= 1 ) {
        printf(" %i\n", number);
        number--;
    }
    return 0;
}