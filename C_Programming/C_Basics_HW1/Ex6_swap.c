/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Maivy Ayman
 */
#include "stdio.h"

void main() {
	float num1, num2, temp;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &num1);

	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping, value of a = %.2f", num1);
	printf("\nAfter swapping, value of b = %.1f", num2);
}

