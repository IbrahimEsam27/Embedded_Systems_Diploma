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

#define pi 3.14
#define Area(radius) pi*radius*radius

int main()
{
	float r;
	printf("Enter Radius of Circle\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("Area = %.2f\n",Area(r));
}
