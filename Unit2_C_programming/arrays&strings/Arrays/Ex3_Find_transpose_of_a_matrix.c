/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int row,col,i,k;
	printf("Enter rows and column for matrix: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&row,&col);
	int a[row][col];              // a is the entered matrix
	int transpose[col][row];                 //the transpose matrix
	printf("Enter elements of matrix: \n");
	for(i=0;i<row;i++)
	{
		for(k=0;k<col;k++)
		{
			printf("Enter elements a%d%d : ",i+1,k+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[i][k]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<row;i++)
	{
		for(k=0;k<col;k++)
		{
			printf(" %d  ",a[i][k]);
		}
		printf("\n\n");
	}
	for(i=0;i<row;i++)
	{
		for(k=0;k<col;k++)
		{
			transpose[k][i]=a[i][k];
		}
	}
	printf("Transpose of matrix:\n");
	for(i=0;i<col;i++)
	{
		for(k=0;k<row;k++)
		{
			printf(" %d  ",transpose[i][k]);
		}
		printf("\n\n");
	}
}
