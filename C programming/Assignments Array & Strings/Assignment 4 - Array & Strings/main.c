/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

/* This program asks user to enter a matrix (size of matrix is specified by user) and this program finds the
transpose of that matrix and displays it.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	int arr[11];
	int insetred_number , location;
	int number_elements;
	printf("Enter the number of elements\n");
	fflush(stdin); fflush(stdout);
	scanf ("%d", &number_elements);
	while (number_elements>10 || number_elements<=0)
	{
		printf ("You should enter number of elements between 1 and 10\n");
		printf("Enter the number of elements\n");
		fflush(stdin); fflush(stdout);
		scanf ("%d", &number_elements);
	}
	for (int i = 0 ; i<number_elements ; i++)
	{
		arr[i] = i+1;
	}
	printf("Enter the number to be inserted\n");
	fflush(stdin); fflush(stdout);
	scanf ("%d", &insetred_number);
	printf("Enter the location\n");
	fflush(stdin); fflush(stdout);
	scanf ("%d", &location);

	for (int i=0 ; i<number_elements ;i++)
	{
		if (location == i+1 )
		{
			for(int j = number_elements ; j>=location ;j--)
			{
				arr[j] = arr[(j-1)];
			}
			arr[i] = insetred_number;
			break;
		}
	}
	for (int i = 0 ; i<=number_elements ; i++)
	{
		printf ("%d	" , arr[i]);
	}

}
