#include "main_header.h"
#include "Animal.h"

Animal::Animal(int legs, const char* name){
	strcpy(this->name, name);
	this->legs = legs;
}

void Animal::printInfo(){
	printf("������ �̸� : %s, �ٸ����� : %d\n", name, legs);
}
