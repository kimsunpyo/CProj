/* 2023 - 02 - 25 c언어 전회차 리뷰 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main10() {
	// 변수 :" 저장공간 (자주 사용된거나 변경될 것 같은 값은 미리 저장해놓는다, 추후 업데이트를 위해
	char a = '\0';
	short bb = 0;
	int b = 0;
	unsigned int u_b = 0u;
	long long bbb = 0l;
	double c = 0.0;
	float d = 0.0f;

	// 변수 선언, 대입, 초기화
	int g;
	g = 0;
	int gg = 0;
	gg;

	// 출력과 입력
	printf("값을 입력하세요>>");
	scanf("%d", &gg);
	printf("입력값은 &d \n", gg);


	return 0;
}
