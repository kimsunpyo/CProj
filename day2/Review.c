#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// ��� printf
	printf("hello world\n");
	printf("�ּ��� //\n");

	// //���� �ּ� (�� ���� �ڵ尡 �ƴ϶� �޸�� ���, ctrl+shift+/)
	// /**/ ������ �ּ�

	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		������ �ּ� �Դϴ�

		Ctrl + Z : �ڷΰ���
		Ctrl + Y : �ڷΰ��� ���
	*/

	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;				// ������ ���� ���� (1byte == 8bit)
	int number;				// ������ ����		(4byte)	
	double dNumber;			// �Ǽ��� ����		(8byte)
	char str[256];			// ���ڿ��� ����	(1*256 byte)

	// ������ ���� ���� (���Կ����)
	// ������ = �����Ͱ�;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");


	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;		// number�� ����ִ� ���� ��� (�ڷ������� �����ֱ�)
	printf("������: %c\n", word);
	printf("������: %d\n", number);
	printf("�Ǽ���: %lf\n", dNumber);
	printf("���ڿ���:%s\n", str2);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ�
	// / : ������
	// % : ���������ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����
	// +, -, *, /, % ����ϱ�

	int num1 = 2;
	int num2 = 4;

	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num2 / num1);
	printf("%d\n", num2 % num1);




	return 0;
}



