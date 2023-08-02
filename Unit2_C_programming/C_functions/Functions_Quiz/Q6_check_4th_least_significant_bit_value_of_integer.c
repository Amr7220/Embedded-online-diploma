/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int check(int x);
int main()
{
	int result,a;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	result=check(a);
	printf("The value of 4th least significant bit is: %d",result);
}
int check(int x)
{
	int flag;
	x&=(1<<3);
	if(x==8)
		flag=1;
	else if (x==0)
		flag=0;
	return flag;
}
