/*
    Write a C program that calculates and prints the sum of numbers in an array.
*/


#include<stdio.h>

int main()
{
    int myArray[6] = {6, 16, 11, 14, 6, 20};
                  //  0   1   2   3  4   5   ====>  called index
    int sum = 0;
    
    for (int i = 0; i < 6; i++) {
        sum = sum + myArray[i]; //or we can use the simplified ver sum += myArray[i]
    }

    printf("Sum of all numbers: %i", sum);

}