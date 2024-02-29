/*
 * main.c
 *
 *  Created on: Feb 29, 2024
 *      Author: ibrah
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

struct ADD_Distance{
	int m_feet;
	int m_inch;
};

int main()
{
	struct ADD_Distance num1 ,num2;
	printf("Enter The first number Feet Then Inch Part\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d %d" ,&num1.m_feet ,&num1.m_inch);
	printf("Enter The Second number Feet Then Inch Part\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d %d" ,&num2.m_feet ,&num2.m_inch);

	if((num1.m_inch+num2.m_inch)>=12)
		printf("distance = %d . %d\n",num1.m_feet+num2.m_feet+1,num1.m_inch+num2.m_inch-12);
	else
		printf("distance = %d.%d\n",num1.m_feet+num2.m_feet,num1.m_inch+num2.m_inch);
}
