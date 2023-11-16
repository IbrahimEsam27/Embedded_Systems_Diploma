/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

//Write Source Code to Swap Two Numbers

#include <stdio.h>
#include <math.h>
#include<conio.h>
int main (void)
{
	int a,b,c;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &b);

	c = a;
	a= b ;
	b = c;
	printf("after swaping value of a = %d\n", a);
	printf("after swaping value of b = %d\n", b);

}
