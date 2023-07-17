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
	printf(" Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	if(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')))
	{
		printf(" %c is an alphabet ",x);
	}
	else 	printf(" %c is not an alphabet ",x);


}
