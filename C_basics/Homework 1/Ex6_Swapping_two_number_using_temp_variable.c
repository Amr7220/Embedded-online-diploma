/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float x,y,z;
	printf(" Enter value of a: ");
	fflush(stdout); fflush(stdin);
		scanf("%f",&x);
	printf(" Enter value of b: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&y);
	z=x;
	x=y;
	y=z;
	printf(" After swapping, value of a = %f \n After swapping, value of b = %f",x,y);

}
