/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// Write C Program to Check Whether a Number is Even or Odd

#include <stdio.h>
int main (void)
{
	float num ;
	int int_num ;
	printf ("Enter the number: ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%f" , &num);

	if ((num - (int)num) ==0 )
	{
		int_num = num;
		if (int_num%2 == 0)
			printf ("%d is even number\n", int_num);
		else
			printf("%d is odd number\n", int_num);

	}
	else
		printf ("The number you entered is float number you should enter integer number \n");
}


