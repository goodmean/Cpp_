//static 키워드가 있으면 각각의 cpp파일에서 다르게 작용한다.
//include 를 한 cpp파일마다 다른 선언과 다른 몸체를 가진다.

#define _CRT_SECURE_NO_WARINGS

#include <cstdio>
#include <cstring>

extern int myValue;

void add();