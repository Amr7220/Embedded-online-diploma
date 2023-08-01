/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int prime_check(int x);
int main()
{
	int a,b,i,check;
printf("Enter two numbers(ntervals): ");
fflush(stdout); fflush(stdin);
scanf("%d%d",&a,&b);
printf("Prime numbers between %d and %d are: ",a,b);
for(i=a+1;i<b;i++)
{
	check=prime_check(i);
	if(check==0)
		printf("%d  ",i);
}
}
int prime_check(int x)
{
	int k,flag=0;
	for(k=2;k<x;k++)
	{
		if(x%k==0)
		{	flag=1;
			break;
		}
	}
	return flag;
}


