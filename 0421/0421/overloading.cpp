// 오버로딩(overloading)
// : 동일한 이름을 갖고 있지만 다른 동작을 하게 만드는 것.

int sum() {
	return 0;
}

int mul(int a, int b, const char* c) {
	return 100;
}

int main() {

	sum();

	return 0;
}