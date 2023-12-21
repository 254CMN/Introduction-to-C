#include<stdio.h>

/**
 * main - A program that takes in a character
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	printf("Enter any character : \n");
	ch = getchar();
	putchar(ch);
	putchar('\n');
	getchar();
	return (0);
}
