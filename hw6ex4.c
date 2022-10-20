/*
 * hw6ex4.c
 *
 *  Created on: Oct 20, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num , *ptr , i,arr[15];
	printf("enter the num for array : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	ptr=arr;
	printf("enter the element of array : \n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<num;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[num-1];
	for(i=num;i>0;i--)
	{
		printf("element :%d  %d\n ",i+1,*ptr);
		fflush(stdin);fflush(stdout);
		ptr--;
	}

}

