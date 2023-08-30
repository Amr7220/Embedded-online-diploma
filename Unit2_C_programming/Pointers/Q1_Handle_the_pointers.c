/*
 * main.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()
{
	int m = 29 , *ab;
	printf("Address of m : 0x%X \n Value of m : %d \n\n",(unsigned int)&m,m);
	ab = &m;
	printf("----->>Now pointer ab is assigned with the address of m.\n\n");
	printf("Address of pointer ab : 0x%X \n Value of pointer ab : %d \n\n",(unsigned int)ab,*ab);
	printf("----->>Value of m is assigned to 34.\n\n");
	m=34;
	printf("Address of pointer ab : 0x%X \n Value of pointer ab : %d \n\n",(unsigned int)ab,*ab);
	printf("----->>Pointer variable ab is assigned to the value 7 now.\n\n");
	*ab=7;
	printf("Address of m : 0x%X \n Value of m : %d ",(unsigned int)&m,m);

}

