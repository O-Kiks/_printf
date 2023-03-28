#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int count_std, count_hmd;
	write(1, "STANDARD:\n", 10);
	count_std = printf("My name is %s, it starts with %% and a %c\n","Hello World", 'F');
	printf("Standard printf() function prints %d characters\n", count_std);

	write(1, "_________________________\n", 26);

	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("My name is %s, it starts with %% and a %c\n","Hello World", 'F');
	printf("Locally created printf() function prints %d characters\n", count_hmd);
	

	return (0);
}
