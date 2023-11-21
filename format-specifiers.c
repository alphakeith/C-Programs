//format specifiers
/*

%c              ====>          character         ====>            used for single character only
%s              ====>           string           ====>                  array of characters
%i or %d        ====>           integer          ====>                  integer or numbers
%f              ====>            float           ====>          decimal numbers precision 7 digits
%lf             ====>           double           ====>          decimal numbers precision 15 digits

*/

#include<stdio.h>

int main()
{

 char middleInitial = 'R'; //single character
 char name[20] = "Alphakeith"; //array of characters
 int age = 19; //integer
 float money = 20; //decimal
 double pi_value = 3.141592653589793; //decimal with 15 precisions

    printf("Name: %s\n", name);
    printf("Middle Name: %c\n", middleInitial);
    printf("Age: %i\n", age); //we can use %i or %d
    printf("Available money sa wallet: Php%.2f\n", money); //i put .2 to display two decimal places
    printf("Current PI value: %.15lf\n", pi_value);

    //i use the newline character \n
    //to move the cursor to the next line

    return 0;
}