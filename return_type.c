#include <stdio.h>

int addNums() { //declaration of variables inside a function named "addNums"

    int num1 = 3, num2 = 2, answer = num1 + num2;

    return answer;

}


//main function
int main()
{
    /* pwede na i store utro sa another variable

    int sum = addNums();

    printf("%i", sum);
    
    pwede man na diretso na */

    printf("%i", addNums());

}