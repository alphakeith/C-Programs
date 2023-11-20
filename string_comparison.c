#include<stdio.h>
#include<string.h> //header file to use string comparison (strcmp)
int main(){

    char password[15];

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(password, "Alphakeith_") == 0) {
        printf("Correct!");
    } else {
        printf("Incorrect Password!");
    }

    return 0;
}