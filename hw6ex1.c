/*
 * hw6ex1.c
 *
 *  Created on: Oct 20, 2022
 *      Author: 20101
 */
#include"stdio.h"
#include"math.h"

int main()
{
int m=29;

printf("adress of m : %p \n" , &m);
printf("value of m : %d \n" , m);
int* ab=&m;
printf("adress of pointer ab %p \n " , ab);
printf("content of pointer ab %d \n " , *ab);
m=34;
printf("adress of pointer ab %p \n " , ab);
printf("content of pointer ab %d \n " , *ab);
*ab=7;
printf("adress of m : %p \n" , &m);
printf("value of m : %d \n" , m);
}
