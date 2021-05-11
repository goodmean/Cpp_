#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
//#include <cstring>
#include <string>
#include <iostream>

int main() {

	std::string str1 = "apple";
	std::string str2 = "apple";
	/*
	if (str1.compare(str2) == 0) {
		printf("두 문자열은 같다.");
	}
	else {
		printf("두 문자열은 다르다.");
	}
	*/
	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("두 문자열은 같다.");
	}
	else {
		printf("두 문자열은 다르다.");
	}





	//std::string myStr = "Hello World!"; // 정적인 형태의 클래스 인스턴스로 선언 & 사용

	//myStr = myStr + " Hello C++!";

	////printf("%s\n", myStr.c_str());

	//std::cout << myStr;

	//std::string* myStrPointer; // 사용자가 메모리 관리를 해줘야 한다는 불편함을 해결하기 위해 나온것이 std::string 인데 동적할당은 말도안된다.

	//myStr은 클래스다 -> 클래스는 인티져 형태로 강제 형변환 된다.
	//이 강제 형변환 된 숫자는 주소값으로 인식된다.






	//char myString[100];

	//printf("Hello\n");

	//strcpy(myString, "Hello World!");
	//strcat(myString, " Hello C++!");
	//

	//printf("%s\n",myString);

	return 0;
}