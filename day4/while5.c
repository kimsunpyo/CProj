#include <stdio.h>

int main7() {
	// while문으로 1~10까지의 합 구하기

	int num = 0;
	int sum = 0;

	while (num < 10) {
		num++;
		sum += num;
	}
		printf("1~10까지의 합:%d", sum);



	return 0;
}