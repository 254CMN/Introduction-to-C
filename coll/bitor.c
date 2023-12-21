#include<stdio.h>
/*
 * main - A function that evaluates salary increments based on age and current salary
 * Employees that are less than 50years are not subject to any increments in salary
 *
 * Return (0) always success
 */
int main(void)
{
	int salary, age;

	printf("Enter your salary :");
	scanf(" %d", &salary);

	printf("Enter your age :");
	scanf("%d", &age);
	if(age > 50)
	{
		if(salary <= 60000)
		{
			salary = salary + 10000;
			printf("Your new salary will be : %d\n", salary);
		}
		else if(salary > 61000 && salary < 100000)
		{
			salary = salary + 5000;
			printf("Your new salary will be : %d\n", salary);
		}
		else if(salary >= 100000)
		{
			printf("Any alterations will only affect your benefits, bonuses and allowances.");
		}
	}
		else
		{
			if(age < 50)
			{
				if(salary <= 20000)
				{
					salary = salary + 5000;
					printf("Your new updated salary will be :%d\n", salary);
				}
				else if(salary > 20000 && salary <= 60000)
				{
					salary = salary + 2000;
					printf("Your new updated salary will be : %d\n", salary);
				}
				else if(salary > 60000 && salary <= 100000)
				{
					salary = salary - 5000;
					printf("Your new updated salary will be : %d\n", salary);
				}
				else if(salary > 100000)
				{
					salary = salary - 20000;
					printf("Your new deducted salary will be : %d\n", salary);
				}
				else
				{
					printf("The company's evaluation is content with your current wage specification.\n");
				}
			}
		}
	printf("For further enquiries contact the HR DEPARTMENT \n");
	return(0);
}
