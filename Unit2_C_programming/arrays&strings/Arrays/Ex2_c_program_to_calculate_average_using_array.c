/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,avg;
	printf("Enter the numbers of data: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);
		sum+=a[i];

	}
	avg=sum/n;
	printf("Average = %.2f ",avg);

}
