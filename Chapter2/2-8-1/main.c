#include<stdio.h>
#include "numhandle.h"
int main(void) {
	int num0 = 10;
	int num1 = 0;
	int num2 = -10;

	printf("num0:%d,increment:%d\n",num0,increment(num0));
	printf("num1:%d,increment:%d\n",num1,increment(num1));
	printf("num2:%d,increment:%d\n",num2,increment(num2));
	
	printf("num0:%d,negate:%d\n",num0,negate(num0));
	printf("num1:%d,negate:%d\n",num1,negate(num1));
	printf("num2:%d,negate:%d\n",num2,negate(num2));

	return 0;
}
