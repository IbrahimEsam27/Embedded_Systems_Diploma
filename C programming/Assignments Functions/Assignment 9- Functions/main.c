/*
 * main.c
 *
 *  Created on: Feb 2, 2024
 *      Author: ibrah
 */

//EX9: C Function that convert decimal number stored as an ASCII to Unsigned Integer


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int Convert ();
int main()
{
	char arr[]="123456";
	int length = strlen(arr);
	printf("The number is %d\n",Convert(arr,length));
}

int Convert (char arr[] , int length )
{
	int i = 0 , j = pow(10,length-1),sum =0;
	for (i=0;i<length;i++)
	{
		if (arr[i]=='0')
			arr[i]=0;
		if (arr[i]=='1')
			arr[i]=1;
		if (arr[i]=='2')
			arr[i]=2;
		if (arr[i]=='3')
			arr[i]=3;
		if (arr[i]=='4')
			arr[i]=4;
		if (arr[i]=='5')
			arr[i]=5;
		if (arr[i]=='6')
			arr[i]=6;
		if (arr[i]=='7')
			arr[i]=7;
		if (arr[i]=='8')
			arr[i]=8;
		if (arr[i]=='9')
			arr[i]=9;
		sum = sum + arr[i]*j;
		j/=10;
	}
	return sum;
}
