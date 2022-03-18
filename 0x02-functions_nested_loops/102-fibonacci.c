#include <stdio.h>

int main(void)
{	
	int i;
	int j;
	int f[51];

	for (i = 1; i <= 50; i++)
	{
		if (i == 1 || i == 2)
		{
			printf("%d\n", i);
		}
		for (j = i - 2; j < 50; j++)
		{
			if ( i == 1 || i == 2){
				printf("%d\n", i);
			}
			f[i] = f[i - 1] + f[j];
		}
		printf("%d\n", f[i]);
	}
	return (0);
}
