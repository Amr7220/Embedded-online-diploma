/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float x;
	printf(" Enter a number: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x);
	if(x>0)
	{
		printf(" %f is positive ",x);
	}
	else if(x<0)
	{
		printf(" %f is negative ",x);

	}
	else if(x==0)
	{
		printf(" You entered zero ");
	}

}
