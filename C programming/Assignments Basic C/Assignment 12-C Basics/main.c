/*
 * main.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Ibrahim Esam
 */

// C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide

#include <stdio.h>
int main (void)
{
	char input , input2 , input3;
	float num1 , num2 ;
	reload_system:
	printf ("Enter Two Operands \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f" , &num1 , &num2);
	calc_system:
	printf ("Enter operator either + or - or * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &input);
	switch(input)
	{
	case'+' :
		printf("The result of %.1f + %.1f = %.1f \n" , num1 , num2 , num1+num2);
		printf("Do you want to do another operation? (y , n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c" , &input3);
		if (input3 == 'y')
			goto reload_system;
		else
		{
			printf("Program finished\n");
			break;
		}
	case'-' :
		printf("The result of %.1f - %.1f = %.1f \n" , num1 , num2 , num1-num2);
		printf("Do you want to do another operation? (y , n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c" , &input3);
		if (input3 == 'y')
			goto reload_system;
		else
		{
			printf("Program finished\n");
			break;
		}
	case'*' :
		printf("The result of %.1f * %.1f = %.1f \n" , num1 , num2 , num1*num2);
		printf("Do you want to do another operation? (y , n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c" , &input3);
		if (input3 == 'y')
			goto reload_system;
		else
		{
			printf("Program finished\n");
			break;
		}

	case'/' :
		printf("The result of %.1f / %.1f = %.1f \n" , num1 , num2 , num1/num2);
		printf("Do you want to do another operation? (y , n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c" , &input3);
		if (input3 == 'y')
			goto reload_system;
		else
		{
			printf("Program finished\n");
			break;
		}

	default:
	{
		printf("You Entered wrong operator do you want to try again (y , n)\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c" , &input2);
		if (input2 == 'y')
			goto calc_system ;
		else
			break;
	}
	}
}

