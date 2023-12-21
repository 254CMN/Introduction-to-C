#include<stdio.h>
#include<math.h>

/**
 * main - Entry point of my program
 * The program is meant to receive input from user then evaluate
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, result, result1, result2;

	printf("Enter three numbers\n");
	scanf("%d\n %d\n %d", &a, &b, &c);
	result = (a * b + c);
	printf("Evaluation = (a * b + c)\n");
	printf("a = %d b = %d c = %d Evaluation = %d\n", a, b, c, result);
	result1 = result * 2;
	printf("Final value after you double the evaluation ? %d\n", result1);
	result2 = result1 + 5;
	printf("Final value added to the square root of 25 : %d \n", result2);
	return (0);
}
