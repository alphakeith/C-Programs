#include<stdio.h>
#include<string.h> 

void menu() {
    printf("======================\n");
    printf("|  TINDAHAN NI KEITH  |\n");
    printf("----------------------\n");
}

int main() {
    int code, quantity;
    float price, amount, total_amount = 0;
    char another[10];

    do {
        printf("ORDER NO.   ITEM NAME:       AMOUNT:\n");
        printf("  [1]      FRENCH FRIES   Php  50.00\n");
        printf("  [2]      BURGER         Php 150.00\n");
        printf("  [3]      MCFLOAT        Php  35.00\n");

        printf("Hello! Welcome sa Tindahan ni Keith!\n");
        printf("Enter Order Number: ");
        scanf("%i", &code);
        printf("Pira kabilog imo orderon?: ");
        scanf("%i", &quantity);

        switch (code) {
            case 1: price = 50;
                    break;
            case 2: price = 150;
                    break;
            case 3: price = 35;
                    break;
        }

        amount = quantity * price;
        printf("Amount: Php%.2f\n", amount);

        total_amount = total_amount + amount;
        printf("Total Amount: Php%.2f\n", total_amount);

        printf("May bakalon kapa? (oo/wara): ");
        scanf("%s", another);

    } while ((strcmp(another, "OO") == 0 || strcmp(another, "Oo") == 0 || strcmp(another, "oo") == 0)
     && 
     (strcmp(another, "WARA") != 0 && strcmp(another, "Wara") != 0 || strcmp(another, "oo") == 0));

     if (strcmp(another, "WARA") || strcmp(another, "Wara") || strcmp(another, "wara"))
       {
        printf("Total Amount: Php %.2f\n", total_amount);
         printf("Salamat sa pagbakal!");
          }

    return 0;
}
