#include "Header.h"
#define true 1

int main() {
	
	while (true) {
		printf("1.");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);

		if (input == 1) {
			for (int i = 0; ) {

			}
		}
		else if (input == 2) {
			//사원추가
			char* name = getString("사원명을 입력해주세요 : ");
			int gender = getInt("성별을 입력해주세요 : ");
			char* rank = getString("직급을 입력해주세요 : ");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank; // 동적으로 할당된 변수 삭제

			employee[count] = e; // 등록
			count++;
		}
		else if (input == 3) {

		}
		else if (input == 4) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			printf("올바르지 않은 입력입니다.");
		}
	}

	return 0;
}

int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	return input;
}

char* getString(const char* prompt) {
	char* input = new char[100];
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", &input); // 99개 문자를 받아서 스트링으로 input에 저장
	return input;
}