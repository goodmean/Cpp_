#include "Header.h"

enum Month {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = Month::JAN;

	switch (m)
	{
	case Month::JAN:
		print("1��");
		break;
	case Month::FEB:
		print("2��");
		break;
	case Month::MAR:
		print("3��");
		break;
	case Month::APR:
		print("4��");
		break;
	case Month::MAY:
		print("5��");
		break;
	case Month::JUN:
		print("6��");
		break;
	case Month::JUL:
		print("7��");
		break;
	case Month::AUG:
		print("8��");
		break;
	case Month::SEP:
		print("9��");
		break;
	case Month::OCT:
		print("10��");
		break;
	case Month::NOV:
		print("11��");
		break;
	case Month::DEC:
		print("12��");
		break;
	default:
		break;
	}
	printf("%d\n", m);

}