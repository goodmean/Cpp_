class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("동물의 이름 : %s, 동물의 다리 : %d\n", name, legs);
	}

};
