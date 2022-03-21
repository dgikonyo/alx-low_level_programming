#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes here*/

/*betty style doc for function main goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX  /2;
	
	if (n <= 0){
		printf("%d is a negative number \n",n);
	}else{
		printf("%d is postitive number \n",n);
	}
	return (0);
