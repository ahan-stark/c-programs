#include <stdio.h>
void pattern(int n)
{
	int i, j;

	// upper half of pattern
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (2 * n); j++)
		{
			// Left part of pattern
			if (i < j)
				printf(" ");
			else
				printf("*");

			// Right part of pattern
			if (i <= ((2 * n) - j))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}

	// lower half of pattern
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (2 * n); j++)
		{
			// Left part of pattern
			if (i > (n - j + 1))
				printf(" ");
			else
				printf("*");

			// Right part of pattern
			if ((i + n) > j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

int main()
{
	pattern(7);
	return 0;
}
