#include<stdio.h>
#define MAXSIZE 40
int main(void) {
	char input[MAXSIZE];
	int count = 0;

	while(gets(input) != NULL) {
		count += 1;
		printf("%d %s\n",count,input);
	}

	return 0;
}
