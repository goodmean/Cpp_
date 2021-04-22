#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <cstdlib>

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("다리 : %d, 이름 : %s\n", legs, name);
	}
};

class Person : public Animal {
public:
	char regist_no[40];

	Person(const char* regist_no) : Animal(2, "사람"){
		strcpy(this->regist_no, regist_no);
	}
	
	void printInfo() {
		printf("이름: &s, 주민번호 : %s\n", name, regist_no);
	}
};

int main() {
	Person* p1 = new Person("1234-1234");
	Animal* a1 = p1;

	p1->printInfo();
	a1->printInfo();

	return 0;
}