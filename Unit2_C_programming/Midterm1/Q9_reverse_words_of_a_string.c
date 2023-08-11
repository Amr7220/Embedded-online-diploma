/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
void reverse(char string[],int n);
int main()
{
	char string[50];
	int n;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(string);
	n=strlen(string);
	reverse(string,n);
}
void reverse(char string[],int n)
{
	char str1[n];
	char str2[n];
	int i,counter,k;
	for(i=0;(i<n)&&(string[i]!=' ');i++)
	{
		str1[i]=string[i];
		counter=i+1;
	}
	str1[counter]=0;
	for(i=counter,k=0;i<n;i++,k++)
	{
		str2[k]=string[i+1];
	}
	strcat(str2," ");
	strcat(str2,str1);
	printf("reversed string: ");
	printf("%s",str2);
}
