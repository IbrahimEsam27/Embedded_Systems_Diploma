/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

/* C program to find sum of two matrix of order 2*2 using multidi mensional arrays where,
elements of matrix are entered by user.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	float matrix_1 [2][2];
	float matrix_2 [2][2];
	printf ("Enter the numbers of first matrix.\n");
	for(int i = 0; i<2 ; i++)
	{
		for (int j = 0 ; j<2 ;j++)
		{
			printf ("Enter A%d%d\n" ,i+1 ,j+1);
			fflush (stdin); fflush (stdout);
			scanf ("%f" , &matrix_1 [i][j]);
		}
	}
	printf ("Enter the numbers of Second matrix.\n");
	for(int i = 0; i<2 ; i++)
	{
		for (int j = 0 ; j<2 ;j++)
		{
			printf ("Enter B%d%d\n" ,i+1 ,j+1);
			fflush (stdin); fflush (stdout);
			scanf ("%f" , &matrix_2 [i][j]);
		}
	}
	printf ("Sum of two Matrixes.\n");
	for(int i = 0; i<2 ; i++)
	{
		for (int j = 0 ; j<2 ;j++)
		{
			printf ("%.1f 	" ,matrix_1 [i][j] + matrix_2 [i][j]);
		}
		printf("\n");
	}
}

