#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter Year: ");
    scanf("%i", &year);
    
    if (year >= 1111 && year <= 9999) {
    
        if (year % 4 == 0) { 
        printf("%i is a leap year", year);
        } else {
        printf("%i is not a leap year", year); };
    } else {
        printf("Invalid Year");
    }

return 0;
}