/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int clear(int x,int y);
int main()
{
	int a,b;
	printf("Enter the input number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	printf("Enter the bit position: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&b);
	printf("result = %d ",clear(a,b));

}
int clear(int x,int y)
{
	x&=~(1<<y);
	return x;
}
