/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
void reverse(int arr[],int n);
int main()
{
	int arr[50];
	int i,n;
	printf("Enter the number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	reverse(arr,n);

}
void reverse(int arr[],int n)
{
	int rev_arr[50];
	int i;
	printf("\nreversed array: ");
	for(i=0;n>=1;i++,n--)
	{
		rev_arr[i]=arr[n-1];
		printf("%d ",rev_arr[i]);
	}
}

