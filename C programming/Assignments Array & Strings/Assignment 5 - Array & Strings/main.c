/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX5: C Program to Search an element in Array.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	int arr[10];
	int insetred_number ;
	int number_elements;
	int count;
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
		printf("Enter element (%d)\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d" , &arr[i]);
	}
	printf("Enter the number to be inserted\n");
	fflush(stdin); fflush(stdout);
	scanf ("%d", &insetred_number);
	for (count=0 ; count <number_elements ;count++)
	{
		if (insetred_number== arr[count])
		{
			printf("Number Found at location %d\n" , count+1);
			break;
		}
	}
	if (count==number_elements)
	{
		printf("Number not Found \n" );
	}
}

