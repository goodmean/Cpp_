#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { // ������ִ� Ŭ������ ��� ����, �Լ��� �ܺο����� Ȱ���� �� �ִ�.
public:
	int legs;
	char name[50];

	Animal() {
		legs = 4;
		strcpy(name, "����");
	}

	void printAnimalInfo() {
		printf("�ٸ��� ���� : %d\n", legs);
		printf("�̸� : %s", name);
	}
};
class Person : public Animal{
public:
	char regist_no[30];

};

int main() { // ������ Ŭ�������� ������ Ŭ�������� �� ���� ����Ѵ�.

	Person* p = new Person();

	p->printAnimalInfo();


	return 0;
}