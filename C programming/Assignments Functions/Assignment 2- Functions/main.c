/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX2: C program to Calculate Factorial ofa Number Using Recursion


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int factorial(int num)
{
	if(num>1)
		return num * factorial(num-1);
}

int main(void)
{
	int num;
	printf("Enter positive Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&num);
	printf("Factorial of %d = %d" , num,factorial(num));

}

