#include <stdio.h>

int main()
{

    char name[20];
    int age;

    printf("Enter Name [alphakeith]: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%i", &age);

    printf("Nice to meet you %s! So you're %i years old.", name, age);

    return 0;
}