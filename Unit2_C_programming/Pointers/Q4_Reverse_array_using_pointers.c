/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int arr[50],*parr,length,i;
	parr = arr;
	printf("Enter number of elements : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&length);
	for (i=0;i<length;i++)
	{
		printf("Enter element - %d : ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Array before reverse: \n");
	for (i=0;i<length;i++)
	{
		printf("Element - %d : %d \n",i+1,*parr);
		parr++;
	}
	parr--;
	printf("\n");
	printf("Array after reverse: \n");
	for (i=length;i>0;i--)
	{
		printf("Element - %d : %d \n",i,*parr);
		parr--;
	}
}
