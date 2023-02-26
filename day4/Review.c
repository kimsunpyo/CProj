// git pull (끌어오기) -> 프로젝트 생성/코드 작성
#include <stdio.h>

int main0() {


	int num = 3;

	if (num == 2) {
		printf("state 1\n");
	}
	else if (num > 2 && num < 4) {
		printf("state 2 \n");
	}
	else if (num == 3) {
		printf("state 3 \n");
	}
	else {
		printf("state 4 \n");
	}




	return 0;
}