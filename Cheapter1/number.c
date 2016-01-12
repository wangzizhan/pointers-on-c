#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void) {
	int ch;
	int line;
	bool at_beginning;

	line = 0;
	at_beginning = true;
	while((ch=getchar()) != EOF) {
		if(at_beginning) {
			at_beginning = false;
			line += 1;
			printf("%d",line);
		}
		putchar(ch);
		if(ch == '\n')
			at_beginning = true;
	}

	return EXIT_SUCCESS;
}
