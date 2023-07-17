/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
int main()

{
	char x;
	printf(" Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
		scanf("%c",&x);
		if(x=='a'||x=='i'||x=='o'||x=='e'||x=='u')
		{
			printf(" %c is a vowel.",x);
		}
		else

			printf(" %c is a consonant.",x);


}
