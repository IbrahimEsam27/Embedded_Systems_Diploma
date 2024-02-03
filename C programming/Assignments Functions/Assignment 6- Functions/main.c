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

int holes_number (int num);

int main( void )
{
	int num;
	printf("Enter The Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&num);
	printf("number of holes in number %d = %d holes\n",num,holes_number(num));
}
int holes_number (int num)
{
	int count=0 , reminder;
	if (num==0)
		return 1;
	while(num!=0)
	{
		reminder = num%10;
		if (reminder==1||reminder==2||reminder==3||reminder==5||reminder==7)
			count+=0;
		if (reminder==0||reminder==4||reminder==6||reminder==9)
			count+=1;
		if (reminder==8)
			count+=2;
		num/=10;
	}
	return count;
}
