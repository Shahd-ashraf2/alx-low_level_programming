#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-ceackne
 * Return: zero
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar (2772 - su);
	return (0);
}
