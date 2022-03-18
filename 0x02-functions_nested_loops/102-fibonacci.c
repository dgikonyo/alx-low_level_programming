#include <stdio.h>

int main(void)
{	
	int i;
	int j;
	int f[51];

	for (i = 1; i <= sizeof(f); i++)
	{
		for (j = 2; j < sizeof(f); j++)
		{
			if ( i == 1 || j == 2){
				printf("%d\n", i);
			}
			f[i] = f[i - 1] + f[j];
		}
		printf("%d\n", f[i]);
	}
	return (0);
}
