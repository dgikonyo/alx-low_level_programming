#include <stdio.h>

int main(void)
{
	long int count, j, k, next;

	j = 1;
	k = 2;
	next = j + k;
	for (count = 0; count <= 98; ++count)
	{
		if (count == 98)
		{
			printf("%ld\n", next);
		}
		else
		{
			printf("%ld, ", next);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
