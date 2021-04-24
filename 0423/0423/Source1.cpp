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
		printf("%s�� �л���ȣ�� %d�Դϴ�. ������ %s�Դϴ�.\n",
			name, student_no, gender == Gender::MALE? "����" : "����"); // :: -> ���� ���� ������
	}
};

int main() {

	return 0;
}