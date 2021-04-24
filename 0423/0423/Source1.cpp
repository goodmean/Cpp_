#include "Header.h"

enum Gender {
	MALE, FEMALE
};

class Student {
public:
	char name[10];
	int student_no;
	int gender;

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}

	void printInfo() {
		printf("%s의 학생번호는 %d입니다. 성별은 %s입니다.\n",
			name, student_no, gender == Gender::MALE? "남성" : "여성"); // :: -> 범위 지정 연산자
	}
};

int main() {

	return 0;
}