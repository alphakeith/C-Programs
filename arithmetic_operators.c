#include <stdio.h>

int main(){

    //declaration
    int num1 = 3, num2 = 2, sum, difference, product, quotient, remainder;

    //formulas
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    //display
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    printf("The difference of %d and %d is %d.\n", num1, num2, difference);
    printf("The product of %d and %d is %d.\n", num1, num2, product);
    printf("The quotient of %d and %d is %d.\n", num1, num2, quotient);
    printf("The remainder of %d and %d is %d.", num1, num2, remainder);

    return 0;
}