#include<stdio.h>

/*
 * main - A program that prints the alphabet using puts() 
 *
 * Return : Always 0
 *
 */
int main(void)
{
	char name[] = "What is your first name ?";
	char name1[] = "What is your second name ?";
	char a[3];
	char b[4];

	puts(name);
	scanf("%s \n", a);
	puts(name1);
	scanf("%s \n", b);
	printf("Hello %s %s \n", a, b);
	return (0);
}
