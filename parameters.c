//parameter is an gina sulod sa parenthesis

#include <stdio.h>

//declaration
void displayNums(int num1, int num2, int num3);

int main()
{
    int num = 61620; //pinasa value san "displayNums" sa num
    displayNums(num, 11, 14); //function call
}

//function name // parameter
void displayNums(int num1, int num2, int num3) {
    printf("%i\n %i\n %i\n", num1, num2, num3);
}