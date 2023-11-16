/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main (void)
{
	float num;
	printf("Enter the number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" , &num);

	if (num <0)
		printf ("%.1f is negative\n" , num);
	else if (num > 0)
		printf ("%.1f is positive\n" , num);
	else
		printf ("You entered ZERO\n" );

}

