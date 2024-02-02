/*
 * main.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Ibrahim Esam
 */

// EX8: C Program to Find Name n Array Using Function.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int find_name(char Name[] , char Names[][14], int count)
{
	int flag =0 , i ;
	for (i = 0 ; i <count ; i++)
	{
		if (stricmp(Name , Names[i]) ==0)
		{
			flag = 1;break;
		}
	}

	return flag;
}

int main(void)
{
	char name[16];
	char names [][14]={"Hema" , "SaSa","Mahmoud" , "Esam" , "Julie"};
	int counter =5;
	puts("Enter The Name");
	fflush(stdin);fflush(stdout);
	gets(name);
	if (find_name(name,names,counter) == 1)
		printf("The Name You Entered is Available\n");
	else
		printf("GoodBye\n");
}
