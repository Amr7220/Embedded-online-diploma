/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float x,y;
		printf(" Enter value of a: ");
		fflush(stdout); fflush(stdin);
			scanf("%f",&x);
		printf(" Enter value of b: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&y);
		x=x+y;
		y=x-y;
		x=x-y;
		printf(" After swapping, value of a = %f \n After swapping, value of b = %f",x,y);

}
