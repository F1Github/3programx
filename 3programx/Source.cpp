#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int k = 1; k <= x; k++)
	{
		for (int i = 1; i <= x - k; i++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * k - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int k = x - 1; k >= 1; k--)
	{
		for (int i = 1; i <= x - k; i++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * k - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}