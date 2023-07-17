/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	char x;
	int y;
	printf(" Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	y=x;
	printf(" ASCII value of %c = %d",x,y);

}
