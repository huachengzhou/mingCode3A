#include <stdio.h>

int a3_1() {

	{
		int a ;
		printf("%s \n", "������һ������!");
		scanf("%d", &a);

		if (a % 5) {
			puts("��������ֲ��ܱ�5����!");
		}
		else {
			printf("�ܹ�������! \n");
		}
	};
	{
		int a = 0;
		if (a) {
			printf("0Ϊtrue \n");
		}
		else {
			printf("0Ϊfalse \n");
		}
		if (1){
			printf("%d��ͨ�� \n", 1);
		}
		int num = 523223;
		if (num) {
			printf("%d��ͨ�� \n", num);
		}
		num = -2121422;
		if (num) {
			printf("%d��ͨ�� \n", num);
		}


	}

	return 0;
}