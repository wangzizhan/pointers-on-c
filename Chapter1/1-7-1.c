#include<stdio.h>

#define MAXSIZE 40
int main(void) {
	int quantity;
	int price;
	char department[MAXSIZE];

	scanf("%d %d %s",&quantity,&price,department);
	printf("%d %d %s\n",quantity,price,department);

	return 0;
}
