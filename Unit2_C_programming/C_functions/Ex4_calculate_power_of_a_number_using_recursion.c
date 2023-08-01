/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int exp(int base,int power);
int main()
{
	int num,pow;
	printf("Enter base number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("Enter power number(positive number): ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&pow);
printf("%d^%d = %d",num,pow,exp(num,pow));
}
int exp(int base,int power)
{
	static int result=1;
	if(power!=0)
	{
		result*=base;
		power--;
		exp(base,power);
	}
	return result;
}
