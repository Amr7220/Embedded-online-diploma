/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int prime(int x);
int main()
{
	int x,y,i;
	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d%d",&x,&y);
	printf("Prime numbers between %d and %d are: ",x,y);
	for(i=x;i<y;i++)
	{
		if(prime(i)==1)
			printf("%d ",i);
	}
}
int prime(int x)
{
	int flag,i;
	for(i=2;i<=x;i++)
	{
		if((x%i==0)&&(x!=i))
		{
			flag=0;
			break;
		}
		else flag=1;
	}
	return flag;
}
