// �����ε�(overloading)
// : ������ �̸��� ���� ������ �ٸ� ������ �ϰ� ����� ��.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char student_name[100];

	Student() { // �Լ����
		student_no = 0;
		strcpy(student_name, "ȫ�浿");
	}

	Student(int studentNo, const char* student_name) {
		this->student_no - studentNo;
		strcpy(this->student_name, student_name);
	}

	void printInfo() {
		printf("%s �л��� ��ȣ : %d\n", student_name, student_no);
	}
};

//int sum() {
//	return 0;
//}
//
//int mul(int a, int b, const char* c) {
//	return 100;
//}

int main() {

	Student* s1 = new Student();
	Student* s2 = new Student(10, "ȫ���");

	s1->printInfo();

	return 0;
}