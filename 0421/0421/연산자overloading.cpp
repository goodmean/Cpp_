// 연산자 오버로딩 +,-,*,/ 기본 자료형에만 유효.

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
};

Vector operator+(Vector& v1, Vector& v2) {
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {
	Vector v1 = Vector(100, 200);
	Vector v2 = Vector(1, 2);

	Vector v3 = v1 + v2;

	return 0;
}