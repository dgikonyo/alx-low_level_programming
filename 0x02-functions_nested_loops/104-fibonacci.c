#include <stdio.h>

int main(void)
{
	long int count, j, k, next;

	j = 1;
	k = 2;
	for (count = 1; count <= 98; ++count)
	{
		if (count == 98)
		{i
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
