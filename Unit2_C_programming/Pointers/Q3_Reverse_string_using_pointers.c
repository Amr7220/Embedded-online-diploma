/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int length,i;
	char str[50],reverse[50],*pstr,*prev;
	pstr = str;
	prev = reverse;
	printf("Enter a string to reverse: ");
	fflush(stdout); fflush(stdin);
	gets(str);
	length = strlen(str);
	while(*pstr!=0)
	{
		pstr++;
	}
	pstr--;
	for (i=0;i<length;i++)
	{
		*prev = *pstr;
		prev++;
		pstr--;
	}
	reverse[length]=0;
	printf("Reversed string is : ");
	printf("%s",reverse);
}


