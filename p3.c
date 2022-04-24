#include <stdio.h>

int main(void) {
	printf("pick an item:\n1 .pizza\n2 .burger\n3 .pasta\n4 .french_fries\n5 .sandwich");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		    printf("\n pizza Rs 239\n");
		    break;
		case 2:
		    printf("\n burger Rs 129\n");
		    break;
		case 3:
		    printf("\n pasta Rs 179\n");
		    break;
		case 4:
		    printf("\n french fries Rs 99\n");
		    break;
		case 5:
		    printf("\n sandwich  Rs149\n");
		    break;
		default : printf("out of stock");
	}
	return 0;
}
