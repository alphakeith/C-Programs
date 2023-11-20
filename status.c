#include <stdio.h>
#include <string.h>
int main()
{
	
		char love_life[10];
	
	printf("LOVE LIFE UPDATE(cheat/loyal): ");
	scanf("%s", love_life);
	
	if (strcmp(love_life, "cheat") == 0){
		printf("BREAK-UP!");
	} else if (strcmp(love_life, "loyal") == 0){
		printf("COMEBACK!");
	} else {
		printf("INVALID");
	}
	
	return 0;
}