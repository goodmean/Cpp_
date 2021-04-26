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
		printf("1월");
		break;
	case Month::FEB:
		printf("2월");
		break;
	case Month::MAR:
		printf("3월");
		break;
	case Month::APR:
		printf("4월");
		break;
	case Month::MAY:
		printf("5월");
		break;
	case Month::JUN:
		printf("6월");
		break;
	case Month::JUL:
		printf("7월");
		break;
	case Month::AUG:
		printf("8월");
		break;
	case Month::SEP:
		printf("9월");
		break;
	case Month::OCT:
		printf("10월");
		break;
	case Month::NOV:
		printf("11월");
		break;
	case Month::DEC:
		printf("12월");
		break;
	default:
		break;
	}
	printf("%d\n", m);

}