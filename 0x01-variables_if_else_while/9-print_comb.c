#include <stdio.h>

int main(void)
{
	int i,j;
	int num[100][100];
	int value[100][100];

	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			value[i][j]= num[i][j];
			putchar(value[i][j]);	
		}
	}

	return (0);
}
