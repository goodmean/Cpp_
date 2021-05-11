// STL : Standard Template Library

#include <cstdio>
#include <string>

template <typename T> // 이 클래스 내부에는 타입이 지정되지 않은 무언가가 있다.
class MyClass {
public:
	T value;
};

template <typename T>
void swap(T* a, T* b) {
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	MyClass<int>* m = new MyClass<int>();
	m->value = 100;

	MyClass<std::string>* ms = new MyClass<std::string>();
	ms->value = "Hello Wolrd!";

	//int value1 = 100;
	//int value2 = 200;

	std::string value1 = "Hello";
	std::string value2 = "World!";

	swap<std::string>(&value1, &value2);	

	printf("value1 : %s\n", value1.c_str());
	printf("value2 : %s\n", value2.c_str());

	return 0;
}