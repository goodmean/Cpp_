class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("������ �̸� : %s, ������ �ٸ� : %d\n", name, legs);
	}

};
