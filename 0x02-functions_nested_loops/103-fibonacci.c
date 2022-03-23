#include <stdio.h>

int main(void)
{
	long int count, sum, j, k, next;

	j = 1;
	k = 2;
	count = 2;
	sum = 2;

	while (count > 0)
	{
		next = j + k;
		count++;
		j = k;
		k = next;

		if (next % 2 == 0)
		{
			sum = sum + next;	
		}

	}
	printf("%ld\n", sum);
	return (0);
}
