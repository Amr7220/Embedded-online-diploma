/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
void check(char name[],char arr[]);
int main()
{
	char name[50];
	char arr[]="USERNAME";
	printf("Enter the username: ");
	fflush(stdout); fflush(stdin);
	gets(name);
	check(name,arr);
}
void check(char name[],char arr[])
{
	if(strcmp(arr,name)==0)
		printf("username is right.");
	else 		printf("username is wrong!.");

}
