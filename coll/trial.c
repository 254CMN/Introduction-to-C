#include <stdio.h>

/*
 * main is a funtion that prints different integers and floating point values
 * Return: Always success(0)
 */

int main(void)
{
	int  x, y, z, a, b;
	unsigned int l;
	float  c;

	x = 15;
	y = 20;
	l = 2147483648;
	z = x++;
	a = y--;
	b = --x;
	c = x / (float)y;

	printf("What is the value of x : %d \n", x);
	printf("What is the value of y : %d \n", y);
	printf("Is x greater than y : %d \n", x > y);
	printf("What is the value of z : %d \n", z);
	printf("What is the value of a : %d \n", a);
	printf("What is the value of b : %d \n", b);
	printf("Value of c : %.7f \n", c);
	printf("%u \n", l);
	return (0);
}
