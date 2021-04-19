#include "Header.h"
#define true 1

int main() {
	
	while (true) {
		printf("1.");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {

		}
		else if (input == 2) {
			
		}
		else if (input == 3) {

		}
		else if (input == 4) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			printf("올바르지 않은 입력입니다.")
		}
	}
}