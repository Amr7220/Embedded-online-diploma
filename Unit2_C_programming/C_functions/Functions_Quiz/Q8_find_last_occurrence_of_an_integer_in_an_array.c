/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int occurrence(int arr[],int n,int num);
int main()
{
	int arr[50];
	int n,num,i;
	printf("Enter number of elements of array: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Array: ");
	for(i=0;i<n;i++)
	{
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find last occurrence: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("last occurrence of %d = %d ",num,occurrence(arr,n,num));
}
int occurrence(int arr[],int n,int num)
{
	int i,occ=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
			occ=i;
	}
	return (occ);
}



