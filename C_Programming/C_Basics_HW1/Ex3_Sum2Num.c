/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Maivy Ayman
 */
#include "stdio.h"

void main() {
	int num1, num2;
	printf("Enter two integers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &num1, &num2);
	printf("Sum: %d ", num1 + num2);
}

