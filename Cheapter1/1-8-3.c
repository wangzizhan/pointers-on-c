#include<stdio.h>
int main(void) {
	signed char checksum = -1;
	int ch;

	while((ch = getchar()) != EOF && ch != '\n') {
		putchar(ch);
		checksum += ch;
	}
	checksum += '\n';
	putchar('\n');	
	printf("%d\n",checksum);
	return 0;
} 
