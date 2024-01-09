/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

/* This program asks user to entera matrix (size of matrix is specified by user) and this program finds the
transpose of that matrix and displays it.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	int matrix [10][10];
	int rows , columns;
	printf ("Enter the number of Rows\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &rows);
	while (rows>10 || rows<=0)
	{
		printf ("You have to enter number of Rows between 1 to 10\n");
		printf ("Enter The number of Rows\n");
		fflush(stdin);fflush(stdout);
		scanf("%d" , &rows);
	}
	printf ("Enter the number of Columns\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d" , &columns);
	while (columns>10 || columns<=0)
	{
		printf ("You have to enter number of Columns between 1 to 10\n");
		printf ("Enter The number of Columns\n");
		fflush(stdin);fflush(stdout);
		scanf("%d" , &columns);
	}
	for (int i = 0 ; i<rows ; i++)
	{
		for(int j = 0 ; j < columns ; j++)
		{
			printf("Enter A%d%d\n" , i+1 , j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d" , &matrix[i][j]);
		}
	}
	printf ("The original matrix.\n");
	for (int i = 0 ; i<rows ; i++)
	{
		for(int j = 0 ; j < columns ; j++)
		{
			printf("%d	" , matrix[i][j]);
		}
		printf ("\n");
	}
	printf ("The Transpose matrix.\n");
		for (int i = 0 ; i<columns ; i++)
		{
			for(int j = 0 ; j < rows ; j++)
			{
				printf("%d	" , matrix[j][i]);
			}
			printf ("\n");
		}



}
