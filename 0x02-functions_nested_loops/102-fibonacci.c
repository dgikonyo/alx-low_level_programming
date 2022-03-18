#include <stdio.h>

int main(void)
{	
	unsigned int i;
	unsigned int j;
	int f[51];

	for (i = 1; i < sizeof(f); i++)
	{
		for (j = 2; j < sizeof(f) - 1; j++)
		{
			if ( i == 1 || j == 2){
				printf("%u\n", i);
			}
			f[i] = f[i - 1] + f[j];
		}
		printf("%u\n", f[i]);
	}
	return (0);
}
