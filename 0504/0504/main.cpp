#include "main_header.h" // ������� ���� �ٿ��ֱ�
#include "Animal.h"
#include "Person.h"

// Ŭ������ ����� ������ ������ ���� �ʾƵ� �ȴ�.
// �������� ������Ͽ� �ߺ������� �Ǿ��־ ����� ����.

int main() { // c++ ���α׷��� ������ cpp������ �������� ���������.

	Animal* animal = new Animal(2, "��");
	animal->printInfo();

	Person* person = new Person("1234-1234", "ȫ�浿");
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

/* �ϳ��� Ŭ������ �ϳ��� ������ϰ� �ϳ��� cpp������ �����.
c++������ �������� �� �� cpp������ �������� �������� �Ѵ�.
�������� ������ �Ǵ� cpp ���Ͽ��� ������ ����ο� �Լ��� ������ �ִٸ�
�� ����� �Լ��� ���� ��ü�� �����ִ� �Լ��� ����ȴ�.(Linking)*/
