/*
 * hw6ex3.c
 *
 *  Created on: Oct 20, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char str[100];
	printf("enter the string \n");
	fflush(stdin);fflush(stdout);
	gets(str);
	char *ptr = &str[strlen(str)-1];
	for(i=0;i<=strlen(str);i++)
	{
		printf("%c",*ptr);
		ptr--;
	}
}

