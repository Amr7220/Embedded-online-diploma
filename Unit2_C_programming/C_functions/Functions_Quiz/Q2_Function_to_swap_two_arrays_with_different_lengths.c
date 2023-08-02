/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
void swap(int a[],int b[],int x,int y);
int main()
{
	int A[50];
	int B[50];
	int i,lengthA,lengthB;
	printf("Enter the length of A and B: "); //user enters two lengths
	fflush(stdout); fflush(stdin);
	scanf("%d%d",&lengthA,&lengthB);
	printf("Enter A elements: ");
	for(i=0;i<lengthA;i++)
	{
		fflush(stdout); fflush(stdin);
		scanf("%d",&A[i]);
	}
	printf("Enter B elements: ");
	for(i=0;i<lengthB;i++)
	{
		fflush(stdout); fflush(stdin);
		scanf("%d",&B[i]);
	}
	printf(" A before swapping: ");
	for(i=0;i<lengthA;i++)
	{
		printf("%d  ",A[i]);
	}
	printf("\n B before swapping: ");
	for(i=0;i<lengthB;i++)
	{
		printf("%d  ",B[i]);
	}
	swap(A,B,lengthA,lengthB);
}
void swap(int a[],int b[],int x,int y)
{
	int temp[50];
	int i;
	for (i=0;i<y;i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];

	}
	printf("\n A after swapping: ");
	for(i=0;i<y;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n B after swapping: ");
	for(i=0;i<x;i++)
	{
		printf("%d  ",b[i]);
	}

}


