/*
 ============================================================================
 Name        : Lab1.c
 Author      : Sammy Warren, Eric Wagner
 Version     :
 Copyright   : Your copyright notice
 Description : Intro to C Basics
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI M_PI


int main(void) {
int r;
float a;
printf("Input the radius of a circle.\n>");
scanf("%d", &r);
a = ((r)*(r)*(PI));
printf("\nThe area of a circle with radius %d is %.3f\n", r, a);
}
