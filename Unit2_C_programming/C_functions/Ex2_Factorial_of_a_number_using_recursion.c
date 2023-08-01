/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int factorial(int x);
int main()
{
	int a;
	printf("Enter an positive integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	printf("Factorial of %d = %d",a,factorial(a));

}
int factorial(int x)
{
	static int fact=1;
	if(x>1)
	{
		fact*=x;
		x--;
		factorial(x);
	}
	return fact;
}
