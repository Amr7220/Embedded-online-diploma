/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	float x,y,temp;
	char z;
	printf(" Enter operator either + or - or * or / : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&z);
	switch(z)
	{
	case'+':
	{
		printf(" Enter two operands: ");
				fflush(stdout); fflush(stdin);
				scanf("%f %f",&x,&y);
		temp=x+y;
		printf(" %f + %f = %f ",x,y,temp);
	}
	break;
	case'-':
	{
		printf(" Enter two operands: ");
				fflush(stdout); fflush(stdin);
				scanf("%f %f",&x,&y);
		temp=x-y;
		printf(" %f - %f = %f ",x,y,temp);
	}
	break;
	case'*':
	{
		printf(" Enter two operands: ");
				fflush(stdout); fflush(stdin);
				scanf("%f %f",&x,&y);
		temp=x*y;
		printf(" %f * %f = %f ",x,y,temp);
	}
	break;
	case'/':
	{
		printf(" Enter two operands: ");
				fflush(stdout); fflush(stdin);
				scanf("%f %f",&x,&y);
		temp=x/y;
		printf(" %f / %f = %f ",x,y,temp);
	}
	break;
	default:
	{
		printf(" Wrong choice ");
	}
	break;

	}
}
