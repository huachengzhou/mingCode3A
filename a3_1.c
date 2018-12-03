#include <stdio.h>

int a3_1() {

	{
		int a ;
		printf("%s \n", "请输入一个整数!");
		scanf("%d", &a);

		if (a % 5) {
			puts("输入的数字不能被5整除!");
		}
		else {
			printf("能够被整除! \n");
		}
	};
	{
		int a = 0;
		if (a) {
			printf("0为true \n");
		}
		else {
			printf("0为false \n");
		}
		if (1){
			printf("%d能通过 \n", 1);
		}
		int num = 523223;
		if (num) {
			printf("%d能通过 \n", num);
		}
		num = -2121422;
		if (num) {
			printf("%d能通过 \n", num);
		}


	}

	return 0;
}