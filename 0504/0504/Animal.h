//#pragma once // 중복 막아주는 매크로! 표준은 아님
#ifndef __ANIMAL_H__ // 이게 표준
#define __ANIMAL_H__

class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name);

	void printInfo();

};

#endif