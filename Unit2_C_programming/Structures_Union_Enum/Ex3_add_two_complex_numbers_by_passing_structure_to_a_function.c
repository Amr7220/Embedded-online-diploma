/*
 * main.c
 *
 *  Created on: Aug 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
struct Snum
{
	double m_real;
	double m_complex;
};
struct Snum read_num(char name[]);
struct Snum sum(struct Snum x,struct Snum y);
void print(struct Snum x);
int main()
{
	struct Snum x,y,z;
	x=read_num("x");
	y=read_num("y");
	z=sum(x,y);
	print(z);
}
struct Snum read_num(char name[])
{
	struct Snum a;
	printf("for %s:\n",name);
	printf("Enter real and imaginary respectively:");
	fflush(stdout); fflush(stdin);
	scanf("%lf %lf",&a.m_real,&a.m_complex);
	return a;
}
struct Snum sum(struct Snum x,struct Snum y){
	struct Snum sum;
	sum.m_real=x.m_real+y.m_real;
	sum.m_complex=x.m_complex+y.m_complex;
	return sum;
}
void print(struct Snum x)
{
	printf("sum=%.2lf+j%.2lf",x.m_real,x.m_complex);
}
