/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float a[2][2];
	float b[2][2];
	int i,k;
	float sum;
	printf("Enter the elements of 1st matrix:\n");
	for(i=0;i<=1;i++)
	{
		for(k=0;k<=1;k++)
		{
			printf("Enter a%d%d: ",i+1,k+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[i][k]);
		}
	}
	printf("Enter the elements of 2nd matrix:\n");

	for(i=0;i<=1;i++)
	{
		for(k=0;k<=1;k++)
		{
			printf("Enter b%d%d: ",i+1,k+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&b[i][k]);
		}
	}
	printf("sum of matrix:\n");

	for(i=0;i<=1;i++)
	{
		for(k=0;k<=1;k++)
		{
		sum=a[i][k]+b[i][k];
			printf("%.1f  ",sum);
		}
		printf("\n");
	}

}

