#include "Header.h"

enum Month {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = Month::JAN;

	switch (m)
	{
	case Month::JAN:
		print("1월");
		break;
	case Month::FEB:
		print("2월");
		break;
	case Month::MAR:
		print("3월");
		break;
	case Month::APR:
		print("4월");
		break;
	case Month::MAY:
		print("5월");
		break;
	case Month::JUN:
		print("6월");
		break;
	case Month::JUL:
		print("7월");
		break;
	case Month::AUG:
		print("8월");
		break;
	case Month::SEP:
		print("9월");
		break;
	case Month::OCT:
		print("10월");
		break;
	case Month::NOV:
		print("11월");
		break;
	case Month::DEC:
		print("12월");
		break;
	default:
		break;
	}
	printf("%d\n", m);

}