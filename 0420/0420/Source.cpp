#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { // 상속해주는 클래스의 멤버 변수, 함수를 외부에서도 활용할 수 있다.
public: // public protected private
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("동물 생성자 실행\n");
		this -> legs = legs;
		strcpy(this->name, name);
	}

	void printAnimalInfo() {
		printf("다리의 개수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Person : public Animal{
public:

	Person(const char* regist_no) : Animal(2,"사람") {
		printf("사람 생성자 실행\n");
		printf("주민번호 : %s\n", regist_no);
	}

	char regist_no[30];
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "강아지") {
		printf("Dog 생성자 실행\n");
	}
};

int main() { // 정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.

	Person* person = new Person("1234-9999");

	person->printAnimalInfo();

	Dog* dog = new Dog();
	dog->printAnimalInfo();

	//person = (Person*)animal;
	person = (Person*)dog; //자식끼리의 데이터 구조가 완벽히 동일하면 성공


	return 0;
}