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
	// 국어=86, 영어=75, 수학=88, 사회=60, 과학=96
	// 평균을 구하세요 (소수점까지)

	int 국어 = 86;
	int 영어 = 75;
	int 수학 = 88;
	int 사회 = 60;
	int 과학 = 96;
	int 총합 = 국어 + 수학 + 영어 + 사회 + 과학;
	double 평균 = 총합 / 5;


	printf("평균 : %lf\n", 평균);


	// #4
	// 증감연산자 사용
	int num = 5;
	// 각 num에 증감연산자를 적용하여 6 6 8 결과를 출력해보세요 ++, --
	printf("num의 값: %d \n", ++num);		// 6
	printf("num의 값: %d \n", num++);		// 6	
	printf("num의 값: %d \n", ++num);		// 8




	return 0;
}