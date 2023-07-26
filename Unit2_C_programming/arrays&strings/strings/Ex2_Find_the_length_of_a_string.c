/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 *
 */
#include<stdio.h>
int main()
{
	char text[100];
	int length=0,i;
	printf("Enter a string: ");
	fflush(stdout); fflush(stdin);
	gets(text);
	for(i=0;i<100;i++)
	{
		if(text[i]!=0)
			length++;
		else break;
	}
	printf("\nlength of string: %d",length);

}
