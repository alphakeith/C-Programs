/*Write a program that takes an integer as input from the user
 and prints its multiplication table up to 100.
 Use a for loop for the multiplication.*/

#include<stdio.h>

int main()
{
    int num, product;

    printf("Enter Integer: ");
    scanf("%i", &num);

    printf("Multiplication Table for %i:\n", num);

    //declaration ; condition ; increment
    for (int i = 1; i <= 100; i+=1) {
        product = num * i;
        printf("%i x %i = %i\n", num, i, product);
    }

    return 0;
}