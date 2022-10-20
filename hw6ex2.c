/*
 ============================================================================
 Name        : hw6ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[27];
	int i;
	char *ptr = arr;
	for(i=0;i<27;i++)
	{
		*ptr=i+65;
		ptr++;
	}
	ptr=arr;
	for(i=0;i<27;i++)
		{
			printf("%c\n", *ptr);
			ptr++;
		}



	return 0;
}
