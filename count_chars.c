/*
#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    printf("Enter a string (press Enter to finish): ");

    // Keep reading characters until enter is pressed
    while ((ch = getchar()) != '\n') {
        count++;
    }

    printf("Number of characters entered: %d\n", count);

    return 0;
}
*/

/*
    COUNT ONLY LETTERS, EXCLUDE SPACES

    while ((ch = getchar()) != '\n') {
        // Check if the character is a letter (A-Z or a-z)
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            count++;
        }
*/

#include <stdio.h>
int main()
{
    double count;

    printf("Enter a string: ");

    for (count = 0; getchar() != '\n'; count++)
        ;

    printf("Number of characters entered: %.0f", count);

    return 0;
}