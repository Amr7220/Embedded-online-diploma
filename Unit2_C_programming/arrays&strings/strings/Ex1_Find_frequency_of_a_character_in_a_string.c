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
char x;
int i,frequency;
printf("Enter a string: ");
fflush(stdout); fflush(stdin);
gets(text);
printf("Enter a character to find frequency: ");
fflush(stdout); fflush(stdin);
scanf("%c",&x);
for(i=0;i<strlen(text);i++)
{
	if(x==text[i])
		frequency++;
}
if(frequency==0)
	printf("Character is not found");
else 	printf("Frequency of %c = %d",x,frequency);
}

