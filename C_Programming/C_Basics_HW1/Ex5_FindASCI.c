/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Maivy Ayman
 */
#include "stdio.h"

void main() {
	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &ch);
	printf("ASCII value of %c = %d",ch,ch);
}

