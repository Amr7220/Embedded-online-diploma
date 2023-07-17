/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float x,y,product;
	printf(" Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x,&y);
	product=x*y;
	printf("product: %f",product);
}
