/*This program has some bugs.*/
#include<stdio.h>
int main(void) {
	int ch;
	int braces;

	braces = 0;
	while((ch = getchar()) != EOF && ch != '\n') {
		if(ch == '{') 
			braces++;
		else if(ch == '}') {
			if(braces == 0) { 
				printf("Extra closing brace.\n");
				break;
			} else if (braces > 0)
				braces--;
		}
	}
	if(braces == 0) 
		printf("Braces matched.\n");
	else
		printf("%d unmatched opening braces\n",braces);
	return 0;
}
