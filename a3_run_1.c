#include <stdio.h>

int a3_run_1() {

	printf("判定约数! \n");
	int a, b;
	printf("请输入整数! \n");
	scanf("%d", &a);
	printf("请输入整数! 且不为0. \n");
	scanf("%d", &b);

	if (b != 0) {
		if (a%b) {
			printf("b不是a的约数!");
		}
		else {
			printf("b是a的约数!");
		}
	}

	return 0;
}