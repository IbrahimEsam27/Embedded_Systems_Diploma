/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

//Write Source Code to Swap Two Numbers without temp variable.

#include <stdio.h>
int main (void)
{
	int a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &b);
	a = a + b;
	b= a - b ;
	a = a -b;
	printf("after swaping value of a = %d\n", a);
	printf("after swaping value of b = %d\n", b);

}
