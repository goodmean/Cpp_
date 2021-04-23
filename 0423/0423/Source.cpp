#include "Header.h"

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("다리 %d, 이름 %s\n", legs, name);
	}
};

class Person : public Animal {
public:
	char regist_no[40];

	Person(const char* regist_no) : Animal(2, "사람") {
		strcpy(this->regist_no, regist_no);
	}

	void printInfo() {
		printf("이름 %s, 주민번호 %s", name, regist_no);
	}
};

int main() {
	Person* person = new Person("1234-5678");
	Animal* animal = person;

	animal->printInfo();
	person->printInfo();

	return 0;
}