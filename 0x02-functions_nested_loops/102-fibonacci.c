#include <stdio.h>

int main(void)
{	
	int i;
	int fib[n + 2];
	fib[0] = 1;
	fib[1] = 2;

	for (i = 3; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		
		printf("%u\n", fib[i]);
	}
	return (0);
}
