#include <stdio.h>

int main5() {
	// #2
	int num1 = 27;

	printf("%d \n", num1 > 10);			// 1
	printf("%d \n", num1 != 5);

	printf("%d \n", num1 >= 27);
	printf("%d \n", num1 == 27);			// 1

	printf("%d \n", num1 < 30);			//1
	printf("%d \n", num1 <= 27);			

	// #3
	// ����=86, ����=75, ����=88, ��ȸ=60, ����=96
	// ����� ���ϼ��� (�Ҽ�������)

	int ���� = 86;
	int ���� = 75;
	int ���� = 88;
	int ��ȸ = 60;
	int ���� = 96;
	int ���� = ���� + ���� + ���� + ��ȸ + ����;
	double ��� = ���� / 5;


	printf("��� : %lf\n", ���);


	// #4
	// ���������� ���
	int num = 5;
	// �� num�� ���������ڸ� �����Ͽ� 6 6 8 ����� ����غ����� ++, --
	printf("num�� ��: %d \n", ++num);		// 6
	printf("num�� ��: %d \n", num++);		// 6	
	printf("num�� ��: %d \n", ++num);		// 8




	return 0;
}