//#pragma once // �ߺ� �����ִ� ��ũ��! ǥ���� �ƴ�
#ifndef __ANIMAL_H__ // �̰� ǥ��
#define __ANIMAL_H__

class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name);

	void printInfo();

};

#endif