#include <stdio.h>
/*headers here */

void show(long num){
	/*if number is smaller than 0, add a (-) sign
	 * and if not change number to positive
	 *Might be the genesis of using print()
	 *
	 */
	if(num <0){
		putchar('-');
		num =-num;
	}

	/*remove the last digit of number and print remaining digits using recursion,and then print last digit*/
	if(num/10){
		show(num/10);/*the recursion part*/
	}
	putchar(num%10 + '0');


}
int main(void)
{
	int x;

	for(x=0;x<10;x++){
		show(x);
	}
	return (0);
}
