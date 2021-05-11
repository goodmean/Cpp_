// extern : 외부에 존재한다 (프로그램 전체의 static)
// 어떤 cpp 파일에서도 동일한 형태로 접근이 가능해진다.

#include "Header1.h"

int main() {
	add();

	printf("%d", myValue);	
	return 0;
}