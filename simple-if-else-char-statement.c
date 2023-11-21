//simple if-else statement w/ string comparison

#include <stdio.h>
#include <string.h> //header file para makagamit ng string comparison function

int main()
{
    //inassgin ko yung value ng fruit sa "banana"
    char fruit[] = "banana"; //pag pinalitan niyo etong value ng ruit na banana yung idi display niya is yung else statment

    //condtional statement
    //the condition here is if the value of fruit is banana
    //it will display I love Banana
    if (strcmp(fruit, "banana") == 0) {
        printf("I love Banana");
    } else {
        printf("No banana?");
    }

    return 0;
}