#include <stdio.h>

int a3_2() {
	{
		int no;
		printf("%s \n", "�ж��Ƿ�Ϊ����!");
		scanf("%d", &no);
		//����һ������
		const int num = 2;
		if (no % num) {
			printf("����! \n");
		}
		else {
			printf("ż��! \n");
		}
	}
	return 0;
}