#include <stdio.h>

int main(void)
{

	char ch;

	ch='a';

	do
	{	if(ch!='e' && ch != 'q'){

			putchar(ch);	
		}
	ch++;

	}while(ch<='z');
	putchar('\n');

	return (0);
}
