/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int n,i,a;
	int arr[100];
	printf("Enter no of elements: ");
	fflush(stdout); fflush(stdin);
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			arr[i-1]=i*11;
			printf(" %d  ",arr[i-1]);
		}
		printf("\nEnter the elements to be searched: ");
		fflush(stdout); fflush(stdin);
				scanf("%d",&a);
				for(i=0;i<n;i++)
				{
					if(a==arr[i])
					{
					printf("Number found at the location = %d",i+1);
					break;
					}

				}

}
