/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int x,factorial=1,i ;
		printf(" Enter an integer: ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&x);
		if(x>=0)
		{
			for(i=x;i>0;i--)
		{
			factorial*=i;
		}
		printf(" Factorial = %d ",factorial);
		}
if(x<0)
{
	printf(" Error!!! Factorial of negative number dosen't exist ");
}
}
