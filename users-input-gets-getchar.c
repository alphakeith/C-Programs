#include<stdio.h>

int main()
{

    char name[50];
    char middle_initial;

printf("Enter Full Name: ");
gets (name);

printf("Name: ");
puts (name);

printf("Middle Initial(R): ");
middle_initial = getchar();

printf("Middle Initial: ");
putchar(middle_initial);

    return 0;
}