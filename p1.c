#include <stdio.h>
int main() {
	int a=5; int b=8;
	printf("before swapping\n");
	printf("a is:%d \n",a);
	printf("b is:%d \n",b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("after swapping\n");
   	printf("a is:%d \n",a);
	printf("b is:%d \n",b);
   return 0;
}
