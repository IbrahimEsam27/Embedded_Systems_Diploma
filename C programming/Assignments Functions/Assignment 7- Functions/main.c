/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX6: C program to determine the sum of the number of holes for all of its digits


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int isPowerOf2(int number);

int main(void)
{
	int num;
	printf("Enter your Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if (isPowerOf2(num) ==0)
		printf("%d is NOT power of 2\n" ,num);
	else
		printf("%d is power of 2\n" ,num);
}
int isPowerOf2(int number)
{
	if (number%2==1 &&number!=1)
		return 0;
	else if (number ==1)
		return 1;
	else if (number ==0)
		return 0;
	else
	{
		while(number!=0)
		{
			if(number%2==0)
			{
				number/=2;
			}
			else
				return 0;
			if (number ==1)
				return 1;
		}

	}
}
