#include <stdio.h>

int a3_run_1() {

	printf("�ж�Լ��! \n");
	int a, b;
	printf("����������! \n");
	scanf("%d", &a);
	printf("����������! �Ҳ�Ϊ0. \n");
	scanf("%d", &b);

	if (b != 0) {
		if (a%b) {
			printf("b����a��Լ��!");
		}
		else {
			printf("b��a��Լ��!");
		}
	}

	return 0;
}