/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

//C Program to Check Vowel or Consonant

#include <stdio.h>

int main (void)
{
	char input;
	printf("Enter a Character\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" ,  &input);
	switch (input)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf ("%c is vowel\n", input) ;
		break;
	default:
		printf ("%c is conosonant\n", input) ;
		break;
	}

}

