// Lab02-002.cpp : Defines the entry point for the console application.
//


#include <stdio.h>  
#include <stdlib.h>     
#include <time.h>  
#include <stdafx.h>

int main()
{
	int iSecret, iGuess;

	srand(time(NULL));

	iSecret = srand() % 10 + 1;

	do {
		printf("Guess the number (1 to 100): ");
		scanf("%d", &iGuess);
		if (iSecret<iGuess) puts("The secret number is lower");
		else if (iSecret>iGuess) puts("The secret number is higher");
	} while (iSecret != iGuess);

	puts("Congratulations!");
	return 0;
}