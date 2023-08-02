/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int check(int x);
int main()
{
	int x;
	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf(" %d ",check(x));
}
int check(int x)
{
	int i,result=1,flag;
	for(i=0;i<x;i++)
	{
		result*=3;
		if(result==x)
		{
			flag=0;
			break;
		}
		else flag=1;
	}
	return flag;
}


