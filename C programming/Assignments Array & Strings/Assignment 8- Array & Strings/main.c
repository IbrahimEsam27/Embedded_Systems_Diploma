/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX8: C Program to Reverse String Without Using Library Function.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main (void)
{
	char word [100];
	int i;
	char temp;
	printf("Enter sentence.\n");
	fflush(stdin);fflush(stdout);
	gets (&word[0]);
	printf ("The original word is %s \n" , word);
	for (i = 0 ; i < (strlen(word)-1-i) ;i++)
	{
		temp = word [i];
		word [i] = word [strlen(word)-1-i];
		word [strlen(word)-1-i] = temp;
	}
	printf ("The reversed word is %s \n" , word);
}

