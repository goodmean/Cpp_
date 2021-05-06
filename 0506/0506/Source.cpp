// 비트와이즈	// 순수 가상함수
// 기계의 근본 연산
// Bitwise or
// Bitwise and
// Shift

#include <cstdio>

int main() {

	int v1 = 1; // 0001 
	int v2 = 2; // 0011
	
	int bitwise_or = v1 | v2;
	printf("bitwise_or : %d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("bitwise_and : %d\n", bitwise_and);

	int shift_left = v1 << 1;
	printf("shift_left : %d\n", shift_left);

	int shift_right = v2 >> 1;
	printf("shift_right : $d\n", shift_right);

	return 0;
}