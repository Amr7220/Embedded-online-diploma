/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int fun(char arr[],int n);
int main()
{
	char arr[50];
	int n;
	printf("Enter number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter array elements: ");
	fflush(stdout); fflush(stdin);
	gets(arr);
	printf(" %d ",fun(arr,n));
}
int fun(char arr[],int n)
{
	int i,result=1,sum=0;
	for(i=n-1;i>=0;i--)
	{
		if((n-i-1)!=0)
		{
			result=result*10;
			sum=sum+(result*(arr[i]-'0'));
		}
		else sum+=(arr[i]-'0');
	}
	return sum;
}

