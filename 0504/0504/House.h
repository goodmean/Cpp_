#ifndef __HOUSE_H__
#define __HOUSE_H__

class Animal; // �Լ��� ���������� Ŭ������ ���漱���� �����ϴ�.

class House {
public:
	Animal* animal;

	void setAnimal(Animal* a);

	class Goo;

	class Foo {
	public:
		Goo* g;
	};
	class goo {
	public:
		Foo* f;
	};
};


#endif