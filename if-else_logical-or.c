/*

• Write a program that will check how much the employee’s incentive
• The user will input number for years in service and the employee’s
office (IT, ACCT, HR)
• Check the following table for the incentive.
• Example: if the user entered 12 for years in service and ACCT for
office, the incentive is 12000.

					YEARS
	OFFICE  more than or equal 10 years		below 10 years
	  IT			10000						5000
	 ACCT			12000						6000
	  HR			15000						7500

*/


#include <stdio.h>

int main() {
	// Declaration
	int years_of_service;
	char office;
	int incentive;

	// Input for years of service
	printf("Enter years in service: ");
	/*condition if the input for
	  years of service is a number
	  it will then proceed to ask for office*/
	if (scanf("%i", &years_of_service) != 1) {
		printf("Invalid Input!!!");
		return 1; // end the program if the input is not a number
	}
	// input for office
	printf("Enter office (I/i for IT, A/a for ACCT, & H/h for HR): ");
	scanf(" %c", &office);

	// Conditions what to print if years of service
	// is greater than or equal to 10
	if (years_of_service >= 10) {
		if (office == 'I' || office == 'i') {
			printf("Incentive is 10000.\n");
		} else if (office == 'A' || office == 'a') {
			printf("Incentive is 12000.\n");
		} else if (office == 'H' || office == 'h') {
			printf("Incentive is 15000.\n");
		} else {
			printf("Invalid Office");
		}

		// condition what to print if
		// years of service is below 10
	} else {
		if (office == 'I' || office == 'i') {
			printf("Incentive is 5000.\n");
		} else if (office == 'A' || office == 'a') {
			printf("Incentive is 6000.\n");
		} else if (office == 'H' || office == 'h') {
			printf("Incentive is 7500.\n");
		} else {
			printf("Invalid Office");
		}
	}

	return 0;
}
