#include <stdio.h>


void MyFunction1() {
    printf("Hello");
    printf(", world!");
}

// �Լ��� ����� �� ���ؾ��ϴ� ���� �ִ� : ()�� �̿�
void MyFunction2(int number) {
    printf("Hello %d", number);
}

// ��ȯ���� �ִ� �Լ� : return, �ڷ���
int MyFunction3() {
    return 333;
}

int main() {
    MyFunction1();
    MyFunction1();



    MyFunction2(33);
    printf("\n");    // �ݺ����� �ƴ� �Լ��� ����ϴ� ����: �߰��� �ڵ� ����
    MyFunction2(44);

    int num1 = MyFunction3();
    num1 = MyFunction3();
    printf("%d \n", MyFunction3());
    printf("%d \n", num1);

    double num2 = MyFunction4(3, 4);

    num2 = MyFunction4(9, 3);
    printf("����� %lf \n", num2);


    return 0;
}