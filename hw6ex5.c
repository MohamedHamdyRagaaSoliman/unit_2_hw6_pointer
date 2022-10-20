/*
 * hw6ex5.c
 *
 *  Created on: Oct 20, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>
struct empy
	{
		char *name;
		int id;
	};
int main() {
	struct empy a={"mohamed",10} ,b={"hamdy" , 20};
	struct empy (*arr[])={&a,&b};
	struct empy (*(*ptr)[3])=&arr;
	printf("employee name : %s\n" , (**(*ptr+1)).name);
	printf("employee id : %d \n" , (*(*ptr+1))->id);

}

