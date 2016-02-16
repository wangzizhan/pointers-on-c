#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char *str = "geniuscat";
	int len = 0;
	
	len = strlength(str);
	printf("String length is %d\n",len);
	
	return 0;
}

int strlength(char *string) {
	int length = 0;
	
	while(*string++ != '\0') 
		length += 1;
	
	return length;	
}
