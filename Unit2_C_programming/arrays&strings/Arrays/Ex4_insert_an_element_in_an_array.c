/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int n,i,a,b;
	printf("Enter no of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{	printf("  %d  ",i+1);
	x[i]=i+1;
	}
	printf("\n");
	printf("Enter the element to be inserted: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	printf("Enter the location: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&b);
	for(i=n;i>=b;i--)
	{
		x[i]=x[i-1];
	}
	x[b-1]=a;
	for(i=0;i<=n;i++)
		printf("  %d  ",x[i]);
}
