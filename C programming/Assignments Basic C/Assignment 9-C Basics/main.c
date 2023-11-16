/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>

int main (void)
{
	char input;
	printf("Enter you Character : ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%c" , &input);

	if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') )
		printf ("%c is an alphabet\n" , input);
	else
		printf ("%c is NOT an alphabet\n" , input);

}

