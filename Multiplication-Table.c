#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Output multiplication table
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
