#include <stdio.h>

int main(void)
{	
	//formua f=f(n-1) + f(n-2)
	int i = 1;
	int j = i - 2;
	int f[51];

	for (i; i <= 50; i++)
	{
		for (j; j < 50; j++)
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
