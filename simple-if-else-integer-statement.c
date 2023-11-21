#include <stdio.h>

int main()
{

    int numberOne = 16; //declaration of variable with an assigned value of 16


//condiotnal statement
//if the value of the variable numberOne is 16 it will display "sixteen"
//else if the value of the variable is 17 it will display seventeen
//and if the value of the variable is other than 16 and 17 it will display invalid
if (numberOne == 16) {
    printf("sixteen");
} else if (numberOne == 17) {
    printf("seventeen");
} else {
    printf("Invalid");
}


    return 0;
}