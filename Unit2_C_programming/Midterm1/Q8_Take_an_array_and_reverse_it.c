/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
void reverse(int arr[],int n);
int main()
{
	int arr[50];
	int n,i;
	printf("Enter the number of elements in array:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d : ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("\nThe array before reversing:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	reverse(arr,n);
}
void reverse(int arr[],int n)
{
	int reversed_array[n];
	int i;
	printf("\nThe reversed array:");
	for(i=0;i<n;i++)
	{
		reversed_array[i]=arr[n-i-1];
		printf("%d ",reversed_array[i]);

	}
}
