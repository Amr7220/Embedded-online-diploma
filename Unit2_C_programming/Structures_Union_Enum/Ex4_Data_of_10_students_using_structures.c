/*
 * main.c
 *
 *  Created on: Aug 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
struct Sstudents
{
	char m_name[100];
	int m_Roll;
	double m_Marks;
};
void info(struct Sstudents x[10]);
void print(struct Sstudents x[10]);
int main()
{
	struct Sstudents arr[10];
	info(arr);
}
void info(struct Sstudents x[10])
{
	int i;
	printf("Enter students informations:\n");
	for(i=0;i<10;i++)
	{
		printf("for roll number %d\n",i+1);
		x[i].m_Roll=i+1;
		printf("Enter name:");
		fflush(stdout); fflush(stdin);
		gets(x[i].m_name);
		printf("Enter marks:");
		fflush(stdout); fflush(stdin);
		scanf("%lf",&x[i].m_Marks);
	}
	print(x);
}
void print(struct Sstudents x[10])
{
	printf("Displaying information of students:\n");
	int i;
	for(i=0;i<10;i++)
	{
		printf("Information for roll number %d:\n",x[i].m_Roll);
		printf("Name: %s\n",x[i].m_name);
		printf("Mark: %.1lf\n",x[i].m_Marks);
	}
}
