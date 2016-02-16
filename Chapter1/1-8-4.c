#include<stdio.h>
#include<string.h>

#define MAX 1000
#define NUM 10

int main(void) {
#if 0
	char str[NUM][MAX];
	int result;
	int i = 0;
	int len_pre = 0;
	int len_after;

	while(gets(str[i]) != NULL && *(str[i]) != NULL) {
		len_after = strlen(str[i]);
		if(len_after > len_pre) {
			len_pre = len_after;
			result = i;
		}
		i++;
	} 	
	printf("%s\n",str[result]);
#endif
	return 0;
}
