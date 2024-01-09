/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX7: C Program to Find the Length of a String.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	char word [15];
	int count=0;
	printf("Enter sentence.\n");
	fflush(stdin);fflush(stdout);
	gets ( word);
	while(word[count] != 0)
	{
		count++;
	}
	printf("The length of string = %d\n" , count);
}

