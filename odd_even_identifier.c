#include <stdio.h>
#include <string.h>

int main() {

	char choose[5];
	int i, number;

	// Ask the user if they want to print odd or even numbers
	printf("Odd or Even?");
	scanf("%s", choose);

	// Use string comparison to compare choices
	if (strcmp(choose, "ODD") == 0 || strcmp(choose, "Odd") == 0 || strcmp(choose, "odd") == 0) {
		printf("You chose to print odd numbers.\n");
	} else if (strcmp(choose, "EVEN") == 0 || strcmp(choose, "Even") == 0 || strcmp(choose, "even") == 0) {
		printf("You chose to print even numbers.\n");
	} else {
		printf("INVALID!\n");
		return 0;
	}

	// Request user input
	printf("Enter Number: ");
	int input = scanf("%i", &number);

	// Check if user input is not a valid number
	if (input != 1) {
		printf("INVALID INPUT!\n");
		return 1;
	}

	// Display odd or even numbers based on user choice
	for (i = 1; i <= number; i++) {
		if ((strcmp(choose, "ODD") == 0 || strcmp(choose, "Odd") == 0 || strcmp(choose, "odd") == 0) && i % 2 != 0) {
			printf("%i ", i);
		} else if ((strcmp(choose, "EVEN") == 0 || strcmp(choose, "Even") == 0 || strcmp(choose, "even") == 0) && i % 2 == 0) {
			printf("%i ", i);
		}
	}

	return 0;
}
