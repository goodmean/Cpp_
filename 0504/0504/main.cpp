#include "main_header.h" // 헤더파일 복사 붙여넣기
#include "Animal.h"
#include "Person.h"

// 클래스의 선언과 파일의 ㅇ름은 같지 않아도 된다.
// 여러개의 헤더파일에 중복적용이 되어있어도 상관이 없다.

int main() { // c++ 프로그램은 무조건 cpp파일을 기준으로 만들어진다.

	Animal* animal = new Animal(2, "닭");
	animal->printInfo();

	Person* person = new Person("1234-1234", "홍길동");
	person->printInfo();

	//foo();

	return 0;
}

//void hoo() {
//	printf("hoo()\n");
//	count++;
//	foo();
//}
//
//void goo() {
//	printf("goo()\n");
//	count++;
//	hoo();
//}
//
//void foo() {
//	if (count > 10) {
//		//DO NOTHING	
//	}
//	else {
//		printf("foo()\n");
//		count++;
//		goo();
//	}
//}

/* 하나의 클래스당 하나의 헤더파일과 하나의 cpp파일을 만든다.
c++파일은 컴파일을 할 때 cpp파일을 기준으로 컴파일을 한다.
컴파일의 기준이 되는 cpp 파일에서 위쪽의 선언부에 함수의 선언이 있다면
그 선언된 함수와 실제 몸체를 갖고있는 함수가 연결된다.(Linking)*/
