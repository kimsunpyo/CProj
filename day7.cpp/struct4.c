#include <stdio.h>
#include <string.h>

	// 원산지, 가격, 바리스타이름을 멤버변수를 갖는 coffee 구조체를 정의해보세요

struct coffee
{	
	char 원산지[30];
	char 이름[30];
	int 가격;


};

int main4() {
	// 교재 295p (1)
	// 구조체 사용

	struct coffee cafe[3] = 
	{	{"한국","홍길동",100},
		{"일본","교토",300},
		{"중국","짜오",200}
	};
	printf("%s는 %s커피를 %d원에 판매합니다\n", cafe[0].이름, cafe[0].원산지, cafe[0].가격);
	printf("%s는 %s커피를 %d원에 판매합니다\n", cafe[1].이름, cafe[1].원산지, cafe[1].가격);
	printf("%s는 %s커피를 %d원에 판매합니다\n", cafe[2].이름, cafe[2].원산지, cafe[2].가격);


	// 홍길동은 000커피를 00원에 판매합니다


	return 0;
}