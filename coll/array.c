#include<stdio.h>
/*
 * main - A program that takes the score of 15 students and outlines those who've attained a passmark of 50
 *
 * Return always (0)
 *
 */
int main(void)
{
	int score[15];
	int i, a = 0, b = 0;

	printf("Enter the score of student :");
	for(i = 0; i < 15; i++)
	{
		scanf("%d", &score[i]);
	}
	for(i = 0; i < 15; i++)
	{
		printf("\nStudent score is :%d", score[i]);
	if(score[i] > 50)
		a++;
	else
		b++;
	}
	printf("\nNumber of students scoring above 50 is : %d", a);
	printf("\nNumber of students scoring 50 and below is : %d\n", b);
	return (0);
}
