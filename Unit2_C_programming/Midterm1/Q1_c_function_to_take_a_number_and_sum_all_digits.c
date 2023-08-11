/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
int sum(int x);
int main()
{
	char arr[50];
	int i,result=0;
	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);
	gets(arr);
	for(i=0;i<strlen(arr);i++)
	{
		result=sum(arr[i]);
	}
	printf("sum = %d",result);
}
int sum(int x)
{
	static int sum=0;
	int y;
	y=x-'0';
	if(y>=0&&y<10)
		sum+=y;
	return sum;
}


