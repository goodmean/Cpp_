#ifndef __HOUSE_H__
#define __HOUSE_H__

class Animal; // 함수와 마찬가지로 클래스도 전방선언이 가능하다.

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