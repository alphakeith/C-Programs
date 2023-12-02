#include <stdio.h>

int main()
{
    int year;
    
    printf("========ENTER VALID YEAR========");
    printf("| Enter Year: ");
    scanf("%i", &year);
    
    if (year >= 1111 && year <= 9999)
    {
        if (year % 4 == 0)
        {
            printf("================================\n");
            printf("|\t%i is a leap year\t\t|\n", year);
            printf("================================\n");
        }
         else
        {
            printf("================================\n");
            printf("|   %i is not a leap year  \t|\n", year);
            printf("================================\n");
        }
    } else
    {
        printf("Invalid Year");
    }
    
return 0;
}