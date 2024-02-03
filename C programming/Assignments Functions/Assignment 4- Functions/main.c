/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX4: C program to Calculate the Power of a Number Using Recursion


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int calc(int base , int pow)
{
	if(pow!=0)
		return base* calc(base,pow-1);
	else return 1;			//without else it prints one more (4^3=256)
}
int main(void)
{
	int base ,pow;
	printf("Enter Base\n");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &base);
	printf("Enter Power\n");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &pow);
	printf("%d ^ %d = %d\n", base ,pow ,calc(base , pow));
}

