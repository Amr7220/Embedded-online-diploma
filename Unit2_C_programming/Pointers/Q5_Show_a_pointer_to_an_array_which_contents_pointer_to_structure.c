/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
struct Sdata
{
	char m_EmployeeName[50];
	int m_EmployeeID;
};
int main()
{
	struct Sdata emp1 = {"Amr",1001},emp2 = {"Alex",1002},emp3 = {"Ahmed",1003};
	struct Sdata (*ptr[]) = {&emp1,&emp2,&emp3};
	struct Sdata *(*px)[3] = &ptr;
	printf("Employee name : %s \n",(*(*px+1))->m_EmployeeName);
	printf("Employee ID : %d ",(*(*px+1))->m_EmployeeID);
}
