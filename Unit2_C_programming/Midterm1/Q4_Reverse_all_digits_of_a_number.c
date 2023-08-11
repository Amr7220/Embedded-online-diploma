/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char arr[],int n);
int main()
{
	char arr[50];
	int n;
	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);
	gets(arr);
	n=strlen(arr);
	printf("Input: %d\n",atoi(arr));
	reverse(arr,n);
}
void reverse(char arr[],int n)
{
	char rev_arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		rev_arr[i]=arr[n-1-i];
	}
	printf("Output: %d",atoi(rev_arr));
}
