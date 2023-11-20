#include<stdio.h>
int main()
{
    float average;

    printf("Enter Average: ");
    scanf("%f", &average);


    if (average >= 90 && average <= 100) {
        printf("You got an A grade!");
    } else if (average >= 80 && average <= 89) {
        printf("You got a B grade"); 
    } else if (average >= 70 && average <= 79) {
        printf("You got a C grade!");
    } else if (average >= 60 && average <= 69) {
        printf("You got a D grade!");
    } else if (average >= 0 && average <= 60) {
        printf("You FAILED!!!");
    } else {
        printf("Invalid grade!!");
    }

    return 0;
}