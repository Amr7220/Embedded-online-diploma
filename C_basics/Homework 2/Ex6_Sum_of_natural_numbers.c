/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int x,sum=0,i ;
	printf(" Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for(i=x;i>=0;i--)
	{
		sum+=i;

	}
	printf(" sum = %d ",sum);
}

