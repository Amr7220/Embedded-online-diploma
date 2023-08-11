/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int sum(int x);
int main()
{
	int num=1;
	printf("Sum of numbers from 1 to 100 is : %d",sum(num));

}
int sum(int x)
{
	static int result=0;
	if(x>0&&x<=100)
	{
		result+=x;
		sum(++x);
	}
	return result;
}
