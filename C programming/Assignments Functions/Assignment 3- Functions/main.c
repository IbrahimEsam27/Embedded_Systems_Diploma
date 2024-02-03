/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX3: C program to Reverse a Sentence Using Recursion


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

void reverse()
{
	char c;
	//fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if (c !='\n')
	{
		reverse();
		printf("%c" , c);
	}
}

int main(void)
{
	printf("Enter sentence\n");
	reverse();

}

