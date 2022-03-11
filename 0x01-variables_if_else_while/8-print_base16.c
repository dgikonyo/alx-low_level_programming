#include <stdio.h>

int main(void){
	int count=0;
	char value[30];
	char ch;

	while(count <=15){
		value[count]=count+'0';
		if(count > 9){
			for(ch='a';ch<='f';ch++){
				value[count]=ch;
			}
		}
		putchar(value[count]);
		count++;
	
	}

	return (0);
}
