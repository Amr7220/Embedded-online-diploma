/*
 * main.c
 *
 *  Created on: Aug 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
struct Sstudent
{
	char m_name[100];
	int m_Roll;
	double m_Marks;
};
struct Sstudent info(struct Sstudent x);
void print(struct Sstudent x);
int main()
{
	struct Sstudent x;
	printf("Enter the information of the student:\n");
	x=info(x);
	print(x);
}
struct Sstudent info(struct Sstudent x)
{
	printf("Enter name:");
	fflush(stdout); fflush(stdin);
	gets(x.m_name);
	printf("Enter roll number:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x.m_Roll);
	printf("Enter marks:");
	fflush(stdout); fflush(stdin);
	scanf("%lf",&x.m_Marks);
	return x;
}

void print(struct Sstudent x)
{
	printf("\nDisplaying information\n");
	printf("name:%s\n",x.m_name);
	printf("Roll:%d\n",x.m_Roll);
	printf("name:%.2lf\n",x.m_Marks);

}



