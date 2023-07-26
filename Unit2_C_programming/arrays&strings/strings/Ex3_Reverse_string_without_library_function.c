/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 *
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int i,length;
	printf("Enter the string: ");
	fflush(stdout); fflush(stdin);
	gets(text);
	length=	strlen(text);
	char reversed_text[length];
for(i=0;i<length;i++)
{
	reversed_text[i]=text[length-1-i];
}
reversed_text[length]=0;
printf(" Reverse string is: %s ",reversed_text);
}
