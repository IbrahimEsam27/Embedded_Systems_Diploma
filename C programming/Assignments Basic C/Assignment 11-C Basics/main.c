/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// C Program to Find Factorial of a Number

#include <stdio.h>

int main (void)
{
	int i = 1;
	int input;
	int sum =1;
	printf ("Enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%d" , &input);
	if (input > 0)
	{
		for (i = 1 ; i<=input ;i++)
		{
			sum*=i;
		}
		printf ("Factorial of %d is %d\n" , input , sum);
	}
	else if (input == 0)
		printf("Factorial of %d = 1" , input);
	else
		printf("Factorial doesn't exist for Negative numbers");

}

