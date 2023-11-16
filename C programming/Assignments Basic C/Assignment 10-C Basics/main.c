/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// C Program to Calculate Sum ofNatural Numbers

#include <stdio.h>

int main (void)
{
	int i = 1;
	int input;
	int sum =0;
	printf ("Enter number of numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%d" , &input);

	while (i<=input)
	{
		sum+=i;
		i++;

	}
	printf("Sum of %d natural numbers is %d\n" , input,sum);

}

