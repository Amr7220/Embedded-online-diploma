/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	char ch='A' , *p;
	p=&ch;
	for (;*p<='Z';(*p)++)
	{
		printf("%c ",*p);
	}
}
