#include<stdio.h>
#define H 100
/**
 * main - A program that multiplies two matrices
 *
 * return 0 always success
 *
 */
int main(void)
{
	int a[H][H], b[H][H], c[H][H], i, j, k, m ,n , p, q, sum;

	printf("Enter rows and columns for first matrix :\n");
	scanf("%d %d", &m, &n);
	printf("\nEnter elements of first matrix :");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter rows and columns  of second matrix :\n");
	scanf("%d %d", &p, &q);
	printf("\nEnter elements of second matrix :");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nMatrix a is :\n");
	for (i = 0; i < m ; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
	printf("\n");
	}
	printf("\nMatrix b is :\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d\t", b[i][j]);
		}
	printf("\n");
	}
	if (n != p)
		printf("\nCannot multiply. Enter matrix where number of columns of first = number of rows of second.\n");
	else
	{
		for ( i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
				sum = 0;
			{
				for (k = 0; k < m; k++)
				{
					sum = sum + a[i][k]*b[k][j];
					c[i][j] = sum;
				}
			}
		}
		/*output for multiplication incorrect. Correct later*/
		printf("\nEnter resultant matrix(c) of a * b :\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
	return (0);
}
