/*
* const
변수라는 공간을 메모리에 차지하고 바뀔 수 있다.
정의가 되지않은 상수는 존재할 수 없다.
10이라는 값은 절대 변하지 않는다
이 이외의 변동형 값을 받을 수가 있다.
->변수 형태를 받아서 가변적인 상수가 될 수 있다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100 // 프로그램에 아예 박히는 놈

class Person {
public:
	const int age;   //변수형태의 공간을 갖고있는 상수

	Person(int n) : age(n) {

	}
};

int main() {

	const char* str;
	char* myStr = new char[100];
	strcpy(myStr, "Hello World!!");
	str = myStr;

	printf("%s", str);

	return 0;

	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	Person* p = new Person(input);

	printf("%d", p->age);


	//const int value = MYVALUE;

	//printf("%d", value);

	return 0;
}