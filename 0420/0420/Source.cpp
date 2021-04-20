#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { // 상속해주는 클래스의 멤버 변수, 함수를 외부에서도 활용할 수 있다.
public:
	int legs;
	char name[50];

	Animal() {
		legs = 4;
		strcpy(name, "동물");
	}

	void printAnimalInfo() {
		printf("다리의 개수 : %d\n", legs);
		printf("이름 : %s", name);
	}
};
class Person : public Animal{
public:
	char regist_no[30];

};

int main() { // 정적인 클래스보다 동적인 클래스에서 더 많이 사용한다.

	Person* p = new Person();

	p->printAnimalInfo();


	return 0;
}