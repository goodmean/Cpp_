#include "Header.h"

//class Calender {
//public:
//	enum Month {
//		JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
//	};
//};

enum class Month {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {

	Month m = Month::JAN;
	int value = (int)m;

	switch (m)
	{
	case Month::JAN:
		printf("1��");
		break;
	case Month::FEB:
		printf("2��");
		break;
	case Month::MAR:
		printf("3��");
		break;
	case Month::APR:
		printf("4��");
		break;
	case Month::MAY:
		printf("5��");
		break;
	case Month::JUN:
		printf("6��");
		break;
	case Month::JUL:
		printf("7��");
		break;
	case Month::AUG:
		printf("8��");
		break;
	case Month::SEP:
		printf("9��");
		break;
	case Month::OCT:
		printf("10��");
		break;
	case Month::NOV:
		printf("11��");
		break;
	case Month::DEC:
		printf("12��");
		break;
	default:
		break;
	}
	printf("%d\n", m);

}