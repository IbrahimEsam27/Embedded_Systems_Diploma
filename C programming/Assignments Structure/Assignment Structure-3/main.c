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

struct ADDcomplex{

	int m_I;
	int m_R;
};
struct ADDcomplex ADD(struct ADDcomplex num1 ,struct ADDcomplex num2)
{
	struct ADDcomplex c ;
	c.m_R= num1.m_R+num2.m_R;
	c.m_I= num1.m_I+num2.m_I;
	return c;
}

int main()
{
	struct ADDcomplex num1 ,num2;
	printf("Enter The first number Real Then Imaginary Part\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d %d" ,&num1.m_R ,&num1.m_I);
	printf("Enter The Second number Real Then Imaginary Part\n");
	fflush(stdin);fflush(stdout);
	scanf ("%d %d" ,&num2.m_R ,&num2.m_I);
	printf("Complex number = %d + %d j\n",ADD(num1,num2).m_R ,ADD(num1,num2).m_I );
}
