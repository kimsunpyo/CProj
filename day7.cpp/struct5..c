//#include <stdio.h>
//#include <string.h>
//
//// ��Ÿũ����Ʈ ���� (�̸�, ü��, ���ݷ�, ����)
//struct Unit
//{
//	char name[100];
//	int hp;
//	int atk;
//	int def;
//};
//
//// typedef ���� ������ �༭ ���θ��� ����� �� �ִ�
//// typedef : �ڷ����� �̸��� ���� ���ϴ� Ű����� ġȯ(�����ֱ�)
//// ��Ÿũ����Ʈ �ǹ�
//typedef struct Building
//{
//	char name[100];
//	int hp;
//} �߹�;			// struct Building==>�ǹ�
//
//int main5() {
//	struct Unit ���۸� = { "���۸�",35,5,0 };
//	struct Unit ���� = { "����",40,6,0 };
//	struct Unit ���� = { "����", 160,16,1 };
//	
//
//	printf("���۸��� ü���� %d\n", ���۸�.hp)
//
//
//	// 1
//	for (int i = 0; i < 10; i++) {
//		(���۸�.hp <= 0)){
//			printf("%s die", ���۸�.name);
//			break;			// ������ �׸� ����
//		}
//		else {
//			printf("���۸��� ü���� %d \n", ���۸�.hp);
//
//				}
//	���۸�.hp -= ����.atk;
//	if (���۸�.hp <= 0) {
//		printf("%s die", ���۸�.name);
//	}
//
//
//
//	return 0;
//}