#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ������ �Է¹޾Ƽ� Ȧ������ ¦������ �Ǻ�

	//int num;
	//printf("������ �Է��ϼ���:");
	//scanf("%d", &num);


	//if (num % 2 == 0) {
	//	printf("¦��\n");
	//}
	//else {
	//	printf("Ȧ��\n");
	//}

	// #3 
	// ���̿� ���� ����ö ���ǥ
	// ���̸� �Է��ϸ� ����� �ȳ����ִ� ���α׷�
	/*
	6���̸�, 65�� �̻�: 0��
	6���̻�, 13�� �̸�: 500��
	13�� �̻�, 19 �̸�: 900��
	19�� �̻�, 65�� �̸�: 1250��
	*/


	//int age;
	//printf("���̸� �Է��ϼ���>>");
	//scanf("%d", &age);
	//if (age < 6) {
	//	printf("0��");
	//}
	//else if (age >= 65) {
	//	printf("0��");
	//}
	//else if (age >= 19) {
	//	printf("1250��");
	//}
	//else if (age >= 13) {
	//	printf("900��");
	//}
	//else if (age >= 6) {
	//	printf("500��");
	//}

	// if ~ else ~ else

	// �߰���� ����� ���ϰ� ������ ���� switch�� ������ �ο�
	// 90�̻�, 80�̻�, 70�̻�, 60�̻�, 60�̸�
	// A, B, C, D, F
	// ���� 88, ���� 90, ���� 58, ��ȸ 81, ���� 72
	// () ����� case�� ������ ��

	//int sum = 0;
	//int kor = 88, eng = 90, math = 58, social = 81, science = 72;

	//sum = kor + eng + math + social + science;
	//double avg = sum / 5.0;

	//// switch�� �Ǽ�X
	//switch ((int)avg / 10) {
	//case 10:
	//	printf("A����");
	//	break;
	//case 9:
	//	printf("A����");
	//	break;
	//case 8:
	//	printf("B����");
	//	break;
	//case 7:
	//	printf("C����");
	//	break;
	//case 60:
	//	printf("D����");
	//	break;
	//default:
	//	printf("F����");
	//}


	// ���� ���ϴ� ���α׷� �����
	// ���� : �⵵�� 4�� ����̸鼭 100�� ����� �ƴ� �⵵ or 400�� ����� �⵵
	// ����̸� 2���� 29�Ϸ� ����
	// �⵵�� �Է��ϸ� �ش� �⵵�� �������� �Ǻ����ִ� ���α׷��� ������!

	int year;
	printf("�⵵�� �Է��ϼ���>>");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0 ) {
		printf("�����Դϴ�");
	}
	else {
		printf("������ �ƴմϴ�");
	}

	return 0;
}
	