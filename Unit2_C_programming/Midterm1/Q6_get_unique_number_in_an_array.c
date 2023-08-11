/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
void unique(int arr[],int n);
int main()
{
	int n,i;
	int arr[50];
	printf("Enter number of elements:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	unique(arr,n);
}
void unique(int arr[],int n)
{
	int k;
	static int i=0;
	{
		for(k=0;k<n&&i<n;k++)
		{
			if(arr[i]==arr[k])
			{
				if(i==k)
					continue;
				else
				{
					i++;
					unique(arr,n);
					break;
				}
			}
			else
			{
				if(k==n-1)
					printf("unique number is : %d",arr[i]);
			}
		}
		if(i>=n&&k!=n-1)
		{
			printf("No unique number.");
			i=0;
		}
		else if (i==n-1&&k==n)
			printf("unique number is : %d",arr[i]);
	}
}
