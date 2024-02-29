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

struct SInformation{
	char name[50];
	int marks;
};

int main()
{
	int i,j;
	struct SInformation arr[4];
	printf("Enter Information of the students\n");
	for(i=0;i<4;i++)
	{
		printf ("For Roll number %d\n",i+1);
		printf ("Enter Name\n");
		fflush(stdin);fflush(stdout);
		scanf("%s",arr[i].name);
		printf ("Enter Marks\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i].marks);
	}
	for(j=0;j<4;j++)
	{
		printf("Information For roll number%d\n",j+1);
		puts(arr[j].name);
		printf("Marks=%d\n",arr[j].marks);
	}
}
