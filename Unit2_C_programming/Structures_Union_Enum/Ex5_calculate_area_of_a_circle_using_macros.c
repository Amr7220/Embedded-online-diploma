/*
 * main.c
 *
 *  Created on: Aug 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#define PI 3.1415
#define area(r)(PI*(r)*(r))
int main()
{
	int r;
	float area;
	printf("Enter the radius:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&r);
	area=area(r);
	printf("Area=%.2f",area);
}
