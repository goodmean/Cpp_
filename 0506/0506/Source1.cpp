// 순수 가상함수 : 몸체가 없는 가상함수, 무조건 상속 - 자식클래스에서 구현한다.


#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal {
public:
	char name[50];
	Animal(const char* name) {
		strcpy(this->name, name);
	}

	virtual int getLegs() = 0;

	void printInfo() {
		printf("이름 : %s\n", name);
	}
};

int main() {

	Animal* animal = new Animal("abcd");

	return 0;
}