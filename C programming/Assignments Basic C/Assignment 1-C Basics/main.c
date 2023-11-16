/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

//Write C Program to Add Two Integers

#include <stdio.h>
#include <math.h>
#include<conio.h>
int main (void)
{
	int num1 , num2;
	printf("Enter two numbers\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d" , &num1 , &num2);
	printf("Sum of two numbers is %d\n", num1+num2);

}
