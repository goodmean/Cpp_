#include "main_header.h"
#include "Animal.h"

Animal::Animal(int legs, const char* name){
	strcpy(this->name, name);
	this->legs = legs;
}

void Animal::printInfo(){
	printf("동물의 이름 : %s, 다리개수 : %d\n", name, legs);
}
