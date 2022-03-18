#include <stdio.h>

int main(void)
{	
	unsigned int i;
	int f[51];

	for (i = 1; i < sizeof(f); i++)
	{
		if ( i == 1 || i == 2)
		{
			printf("%u\n", i);
		}
		f[i] = f[i - 1] + f[1 - 2];
		
		printf("%u\n", f[i]);
	}
	return (0);
}
