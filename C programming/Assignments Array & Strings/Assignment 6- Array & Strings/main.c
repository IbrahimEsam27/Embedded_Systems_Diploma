/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX6: C Program to Find the Frequency of Characters in a String.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	char word [15];
	char ch;
	int i ,count=0;
	printf("Enter sentence.\n");
	fflush(stdin);fflush(stdout);
	gets ( word);
	printf("Enter a Character.\n");
	fflush(stdin);fflush(stdout);
	scanf ("%c", &ch);
	for (i = 0 ; i< strlen(word) ; i++)
	{
		if (ch == word[i])
			count++;
	}
	printf("The frequency of %c = %d\n" , ch , count);
}

