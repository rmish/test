/*
 ============================================================================
 Name        : example_01.c
 Author      : Котик
 Version     :
 Copyright   : nothing
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char str[10];

int main(void) {
	puts("Привет }:->"); /* prints Мяф! */
	gets(str);
	puts(str);
	puts("Привет }:->"); /* prints Мяф! */
	return EXIT_SUCCESS;
}
