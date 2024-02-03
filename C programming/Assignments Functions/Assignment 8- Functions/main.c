/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX8: C Function to calculate the Fibonacci series


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int fibo(int num)
{
	int i , temp1 = 1 ,temp2=1 ,sum=0;
	if(num==1||num==2)
		return 1;
	else
	{
		for (i=3;i<=num;i++)
		{
			sum=temp1+temp2;
			temp1=temp2;
			temp2=sum;
		}
	}
	return sum;

}
int main()
{
	int num;
	printf ("Enter The number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Fibonacci number (%d) = %d\n",num,fibo(num));
}
