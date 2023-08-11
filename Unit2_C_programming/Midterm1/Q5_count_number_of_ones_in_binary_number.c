/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int count(int x);
int main()
{
	int x,i,num,counter=0;
	printf("Enter a number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("Number in binary form: ");
	for(i=31;i>=0;i--)
	{
		num=(x>>i)&1;
		printf("%d",num);
		counter+=count(num);
	}
	printf("\nNumber of ones in %d in binary form is: %d",x,counter);
}
int count(int x)
{
	int flag=0;
	if(x==1)
		flag=1;
	else flag=0;
	return flag;
}
