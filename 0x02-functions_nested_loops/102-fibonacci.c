#include <stdio.h>

int fibo(int n)
{
	int fib[n + 2];
	fib[0] = 1;
	fib[1] = 2;

	for (int i = 3;i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[n];
}

int main(void)
{	
	int n = 50;

	printf("%d",fibo(n));
	return (0);
}
