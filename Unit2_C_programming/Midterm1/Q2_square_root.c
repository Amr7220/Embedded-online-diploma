/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
float root(int x);
int main()
{
	int num;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("Square root of %d = %.3f",num,root(num));
}
float root(int x)
{
	float y,t=0.001;
	y=x;
	while(y*y-x>t)
	{
		y=(y+(x/y))/2;
	}
	return y;
}

