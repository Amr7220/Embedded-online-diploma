/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
int x,y,sum;
printf(" Enter two integers: ");
fflush(stdout); fflush(stdin);
scanf("%d %d",&x,&y);
sum=x+y;
printf(" sum: %d",sum);
}
