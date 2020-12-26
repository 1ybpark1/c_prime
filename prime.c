#include <stdio.h>

int main(void) {
	int input = 0; // input value
	int i = 0; // for parameter
	int flag = 0; // prime flag

	printf("Input Integer : ");
	scanf("%d",&input);

	for(i = 2; i < input; i++) {
		if(input % i == 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) printf("%d is prime number.\n",input);
	else printf("%d is not prime number.\n",input);
}
