/*Create a program that acts as a basic calculator. It should be able to perform the four basic arithmetic operations: addition, subtraction, multiplication, and division. Here are some guidelines to help you get started:

Use functions: Define separate functions for addition, subtraction, multiplication, and division.

Input: Allow the user to input two numbers and the operation they want to perform.

Output: Display the result of the operation.

Error handling: Handle cases where the user inputs invalid numbers or tries to divide by zero.*/

#include <stdio.h>

int main()
{

    int num1, num2, sum, difference, product, quotient;
    char operation;

    printf("Enter First Number: ");
    scanf("%i", &num1);

    printf("Enter Second Number: ");
    scanf("%i", &num2);

    printf("Enter Operation (+, -, *, /): ");
    scanf(" %c", &operation);

            //formulas
            sum = num1 + num2;
            difference = num1 - num2;
            product = num1 * num2;
            
            

    switch(operation) {
        case '+':
            printf("Sum: %i", sum);
            break;
        case '-':
            printf("Diference: %i", difference);
            break;
        case '*':
            printf("Product: %i", product);
            break;
        case '/':
        if (num2 != 0) {
            quotient = num1 / num2;
            printf("Quotient: %i", quotient);
        } else {
            printf("Error! Any number divided by zero is undefined.");
        }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}