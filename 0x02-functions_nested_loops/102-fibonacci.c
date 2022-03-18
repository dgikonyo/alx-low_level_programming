#include <stdio.h>

int main(void)
{	
	int i;
	int j;
	int f[51];

	for (i = 1; i <= len(f); i++)
	{
		for (j = 2; j < len(f); j++)
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
