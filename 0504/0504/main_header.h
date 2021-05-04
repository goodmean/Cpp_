#define _CRT_SECUER_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>

int count = 0;

void goo();
void hoo();

void foo() {
	if (count > 10) {
		//DO NOTHING	
	}
	else {
		printf("foo()\n");
		count++;
		goo();
	}
}

void goo() {
	printf("goo()\n");
	hoo();
}

void hoo() {
	printf("hoo()\n");
	foo();
}
