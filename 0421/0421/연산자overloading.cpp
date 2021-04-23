// 연산자 오버로딩 +,-,*,/ 기본 자료형에만 유효.
#include <cstdio>

class Vector {
public:
	float X;
	float Y;

	Vector(float X, float Y) {
		this->X = X;
		this->Y = Y;
	}

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	void printInfo() {
		printf("%.2f, %.2f", X, Y);
	}
};

Vector operator+(Vector& v1, Vector& v2) {
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {
	Vector v1 = Vector(100, 200);
	Vector v2 = Vector(1, 2);

	Vector v3 = v1 + v2;

	v3.printInfo(); // 정적으로 할당된 인스턴스에서 동작한다.

	return 0;
}

// c++에는 연산자 오버로딩이 가능하고 이걸 활용하는 오픈소스 라이브러리가 많다.
// 또는 게임 엔진이 많다. 가져다 쓰면 된다.