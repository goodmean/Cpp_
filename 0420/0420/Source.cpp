#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Animal { // ������ִ� Ŭ������ ��� ����, �Լ��� �ܺο����� Ȱ���� �� �ִ�.
public: // public protected private
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		printf("���� ������ ����\n");
		this -> legs = legs;
		strcpy(this->name, name);
	}

	void printAnimalInfo() {
		printf("�ٸ��� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Person : public Animal{
public:

	Person(const char* regist_no) : Animal(2,"���") {
		printf("��� ������ ����\n");
		printf("�ֹι�ȣ : %s\n", regist_no);
	}

	char regist_no[30];
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "������") {
		printf("Dog ������ ����\n");
	}
};

int main() { // ������ Ŭ�������� ������ Ŭ�������� �� ���� ����Ѵ�.

	Person* person = new Person("1234-9999");

	person->printAnimalInfo();

	Dog* dog = new Dog();
	dog->printAnimalInfo();

	//person = (Person*)animal;
	person = (Person*)dog; //�ڽĳ����� ������ ������ �Ϻ��� �����ϸ� ����


	return 0;
}