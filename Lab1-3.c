/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
int num1, num2, op, l;
float an;

printf("Input Operand 1: ");
scanf("%d", &num1);
printf("Input Operand 2: ");
scanf("%d", &num2);
l = getchar();
puts("What operation do you want to perform? (+ - * /)");
op = getchar();

switch(op){
case '+' :
	an = num1 + num2;
	break;
case '-' :
	an = num1 - num2;
	break;
case '*' :
	an = num1 * num2;
	break;
case '/' :
	if(num2 == 0)
	{
		printf("\nUnable to divide by 0\n");
		return 0;
	}
	an = (float)num1 / (float)num2;
	break;
default:
	printf("\n***ERROR***\n");
	break;
}
printf("%d %c %d = %.3f\n", num1, op, num2, an);
return 0;
}
