#include <stdio.h>

int main4() {

	/*
	�ۼ��� : ���ǥ
	�ۼ���¥ : 2023-2-18
	��� : printf �� ���ڿ� ���
	*/
	// �̸�, �⵵, ��, ��, f ==> ����
	// ���ڿ�[]���� : �̸�		%s
	// �������� : �⵵, ��, ��			%d
	// ���ں��� : f				%c


	char name[] = "ȫ�浿";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'f';
	char multi[] = "��� : printf�� ���ڿ� ���";


	printf("�ۼ��� : %s\n", name);
	printf("�ۼ���¥ : %d-%d-%d\n", year,month,day);
	printf("��� : print%c�� ���ڿ� ���\n", word);
	printf("%s\n", multi);

	return 0;
}