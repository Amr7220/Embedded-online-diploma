/*
 * main.c
 *
 *  Created on: Aug 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
struct Snum
{
	double m_feet;
	double m_inch;
};
struct Snum read(char name[]);
struct Snum sum(struct Snum x,struct Snum y);
void print(struct Snum a);
int main()
{
	struct Snum x,y,z;
	x=read("x");
	y=read("y");
	z=sum(x,y);
	print(z);
}
struct Snum read(char name[])
{
	struct Snum c;
	printf("Enter information for distance %s:\n",name);
	printf("Enter feet:");
	fflush(stdout); fflush(stdin);
	scanf("%lf",&c.m_feet);
	printf("Enter inch:");
	fflush(stdout); fflush(stdin);
	scanf("%lf",&c.m_inch);
	return c;
}
struct Snum sum(struct Snum x,struct Snum y)
{
	struct Snum sum;
	sum.m_inch=x.m_inch+y.m_inch;
	sum.m_feet=x.m_feet+y.m_feet+((int)sum.m_inch/12);
	while(sum.m_inch>=12)
		sum.m_inch-=12;
	return sum;
}
void print(struct Snum a)
{
	printf("Sum of distances=%.2lf' -%.2lf\"",a.m_feet,a.m_inch);
}
