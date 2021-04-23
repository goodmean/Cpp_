#include "Header.h"

class Animal {
public:
	int legs;
	char* name;

	Animal(int legs, const char* name) {
		this->name = new char[strlen(name) + 1];
		this->legs = legs;
		strcpy(this->name, name);
	}

	~Animal() {
		delete[] name;
	}

	virtual void printInfo() { // 부모가 버추얼 함수면 자식은 아니어도 되지만 반대는 안됨.
		printf("다리 %d, 이름 %s\n", legs, name);
	}
};

class Person : public Animal {
public:
	char* regist_no;

	Person(const char* regist_no) : Animal(2, "사람") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	~Person() {
		delete[] regist_no;
	}

	void printInfo() {
		printf("이름 %s, 주민번호 %s", name, regist_no);
	}
};

int main() {

	Animal* animal = new Person("1234-5678");
	delete animal;

	Person* person = new Person("9876-5678");
	delete person;

	//Person* person = new Person("1234-5678");
	//Animal* animal = person;

	//animal->printInfo();
	//person->printInfo();

	return 0;
}