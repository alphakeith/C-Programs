#include <stdio.h>

void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
     char userName[50];
    
    printf("Enter your name: ");
    scanf("%s", userName);

    greetUser(userName); //call function
    
    return 0;
}
