/*
 * main.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int max(int x);
int main()
{
	int x,i,num,counter;
	printf("Enter an integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("Number in binary: ");
	for(i=31;i>=0;i--)
	{
		num=(x>>i)&1;
		printf("%d",num);
		counter=max(num);
	}
	printf("\n");
	printf("Maximum number of sequential ones is: %d",counter);
}
int max(int x)
{
	static int counter=0,temp=0;
	if(x==1)
	{
		counter++;
		if(counter>=temp)
			temp=counter;
	}
	else counter=0;
	return temp;
}

