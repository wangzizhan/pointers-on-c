#include<stdio.h>

int main(void) {
	char *strs = "geniuscat";
	char val = 'w';
	int ret = 0;

	ret = find_char(strs,val);
	printf("%d\n",ret);
	return 0;
}

int find_char(char *string,char value) {
	while(*string != '\0') {
		if(*string++ == value) 
			return 1;
	}
	
	return 0;
}
