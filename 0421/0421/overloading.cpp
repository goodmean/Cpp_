// 오버로딩(overloading)
// : 동일한 이름을 갖고 있지만 다른 동작을 하게 만드는 것.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char student_name[100];

	Student() { // 함수취급
		student_no = 0;
		strcpy(student_name, "홍길동");
	}

	Student(int studentNo, const char* student_name) {
		this->student_no - studentNo;
		strcpy(this->student_name, student_name);
	}

	void printInfo() {
		printf("%s 학생의 번호 : %d\n", student_name, student_no);
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
	Student* s2 = new Student(10, "홍길순");

	s1->printInfo();

	return 0;
}