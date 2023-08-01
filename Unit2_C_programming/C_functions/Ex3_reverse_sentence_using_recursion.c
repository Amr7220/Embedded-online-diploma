/*
 * main.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Amr Ahmed
 */
#include<stdio.h>
#include<string.h>
void reverse(char arr[],int n);
int main()
{
	char sentence[100];
	printf("Enter a sentence: ");
	fflush(stdout); fflush(stdin);
	gets(sentence);
	reverse(sentence,strlen(sentence));
}
void reverse(char arr[],int n)
{
	 char reversed_word[100];
	static int i=0;
	if((n-1)>=0)
	{
		reversed_word[i]=arr[n-1];
		printf("%c",reversed_word[i]);
		i++;
		n--;
		reverse(arr,n);
	}

}

