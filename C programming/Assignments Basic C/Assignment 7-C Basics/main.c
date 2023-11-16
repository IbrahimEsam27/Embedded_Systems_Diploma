/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

//C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main (void)
{
	int x,y,z;
		printf ("Enter three numbers\n");
		fflush (stdout);
		scanf ("%d" ,&x );
		printf ("Enter second numbers\n");
		fflush (stdout);
		scanf ("%d" ,&y);
		printf ("Enter third numbers\n");
		fflush (stdout);
		scanf ("%d" ,&z);
		if (x>y && x>z)

			printf ("The largest number is %d\n",x);
		else if (y>z)
			printf ("The largest number is %d\n",y);

		else
			printf ("The largest number is %d\n",z);

}

