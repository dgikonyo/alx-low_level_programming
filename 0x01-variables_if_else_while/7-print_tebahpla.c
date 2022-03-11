#include <stdio.h>
#include <string.h>
/*headers coming here*/

int main(void){
	/*
	 *We are going to have two for loops,one will loop  and get all the alphabets and store them in an array

	 The we use the other for loop to reverse the variable.
	 * */

	char ch[30];
	char new_words[30];
	int count=0;
	int j=0;
	int i=0;

	for(i=0;i<26;i++){
		ch[i]='a'+i;
	}

	ch[i]='\0';/*null terminate the array*/

	/*getting the length of the string*/
	while(ch[count]!=0){
		count++;
	}
	j=count-1;
	
	/*reversing the string by swapping*/
	for(i = 0;i < count;i++){
		new_words[i]=ch[j];
		j--;
		putchar(new_words[i]);
	}

	putchar('\n');
	return (0);
}
