#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 정수를 입력받아서 홀수인지 짝수인지 판별

	//int num;
	//printf("정수를 입력하세요:");
	//scanf("%d", &num);


	//if (num % 2 == 0) {
	//	printf("짝수\n");
	//}
	//else {
	//	printf("홀수\n");
	//}

	// #3 
	// 나이에 따른 지하철 요금표
	// 나이를 입력하면 요금을 안내해주는 프로그램
	/*
	6세미만, 65세 이상: 0원
	6세이상, 13세 미만: 500원
	13세 이상, 19 미만: 900원
	19세 이상, 65세 미만: 1250원
	*/


	//int age;
	//printf("나이를 입력하세요>>");
	//scanf("%d", &age);
	//if (age < 6) {
	//	printf("0원");
	//}
	//else if (age >= 65) {
	//	printf("0원");
	//}
	//else if (age >= 19) {
	//	printf("1250원");
	//}
	//else if (age >= 13) {
	//	printf("900원");
	//}
	//else if (age >= 6) {
	//	printf("500원");
	//}

	// if ~ else ~ else

	// 중간고사 평균을 구하고 점수에 따라서 switch로 학점을 부여
	// 90이상, 80이상, 70이상, 60이상, 60미만
	// A, B, C, D, F
	// 국어 88, 영어 90, 수학 58, 사회 81, 과학 72
	// () 내용과 case가 같은지 비교

	//int sum = 0;
	//int kor = 88, eng = 90, math = 58, social = 81, science = 72;

	//sum = kor + eng + math + social + science;
	//double avg = sum / 5.0;

	//// switch는 실수X
	//switch ((int)avg / 10) {
	//case 10:
	//	printf("A학점");
	//	break;
	//case 9:
	//	printf("A학점");
	//	break;
	//case 8:
	//	printf("B학점");
	//	break;
	//case 7:
	//	printf("C학점");
	//	break;
	//case 60:
	//	printf("D학점");
	//	break;
	//default:
	//	printf("F학점");
	//}


	// 윤년 구하는 프로그램 만들기
	// 윤년 : 년도가 4의 배수이면서 100의 배수가 아닌 년도 or 400의 배수인 년도
	// 운년이면 2월이 29일로 끝남
	// 년도를 입력하면 해당 년도가 윤년인지 판별해주는 프로그램을 만들자!

	int year;
	printf("년도를 입력하세요>>");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0 ) {
		printf("윤년입니다");
	}
	else {
		printf("윤년이 아닙니다");
	}

	return 0;
}
	