#include<stdio.h>

/*
 * main - A program that prints the prompted user's name  using puts()
 *The issue with your code is likely related to the use of scanf with %s for input. When using %s, scanf stops reading input as soon as it encounters a whitespace character (space, newline, tab, etc.). So, if the user enters a full name with a space, only the first part of the name will be stored in the array.To fix this, you can use the %[^\n] format specifier, which tells scanf to read all characters until it encounters a newline character:
 *
 * Return : Always 0
 *
 */
int main(void)
{
	char name[] = "What is your first name ?";
	char name1[] = "What is your second name ?";
	char a[10];
	char b[10];

	puts(name);
	scanf(" %[^\n]", a);//Note the space before %[^\n]
	puts(name1);
	scanf(" %[^\n]", b);//Note the space before %[^\n]
	printf("Hello %s %s \n", a, b);
	return (0);
}
