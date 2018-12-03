#include <stdio.h>

int a3_2() {
	{
		int no;
		printf("%s \n", "判定是否为奇数!");
		scanf("%d", &no);
		//定义一个常量
		const int num = 2;
		if (no % num) {
			printf("奇数! \n");
		}
		else {
			printf("偶数! \n");
		}
	}
	return 0;
}