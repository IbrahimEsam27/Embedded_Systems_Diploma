/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

/* This program takes n number of element from user(where, n is specified by user), stores data in an array
and calculates the average of those numbers.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	float arr [20];
	int num;
	float sum = 0;
	printf ("Enter the numbers of elements.\n");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &num);
	for(int i = 0; i<num ; i++)
	{
		printf ("Enter element number %d\n" ,i+1) ;
		fflush (stdin); fflush (stdout);
		scanf ("%f" , &arr [i]);
	}
	arr[num] =0;
	for(int i = 0; i<num ; i++)
	{
		sum+=arr[i];
	}
	printf ("The average of numbers = %.2f\n" , sum/num);
}
