#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;
	int sum = 0;
	double avg = 0.0;

	sum = kor + eng + math;
	avg = (double)sum / 3;
	// 합계와 평균을 구해주세요
	// 합계: 000
	// 평균: 00

	printf("합계: %d\n", sum);
	printf("평균: %lf", avg);

	return 0;
}