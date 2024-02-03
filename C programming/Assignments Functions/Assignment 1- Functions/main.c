/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX1: Prime Numbers Between two Intervals by Making User-defined Function

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int prime(int num)
{
	int i, flag =0;
	for(i=2;i<10;i++)
	{
		if (num==i)
			continue;
		if (num%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main(void)
{
	int num1,num2 , i;
	printf("Enter The two Numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d" , &num1 , &num2);
	printf("The Prime Numbers between %d and %d are ",num1,num2);
	for (i=num1+1;i<(num2);i++)
	{
		if(prime(i)==0)
			printf("%d ",i);
	}
}
