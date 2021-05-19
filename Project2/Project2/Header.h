#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

class MyClass {
public:
    static int static_member_int;
    int a;
    void foo();
    static void goo();
};






/*
class MyClass {
public:
   static int b; //전역변수
   int a;
   void foo() {      //자기 자신의 인스턴스가 있다.
      a = 100;
      this->a = 200;
      printf("foo\n");
   }
   static void goo() { //주체가 필요없다 (클래스 안에 존재하는 클래스 인스턴스가 없는 함수다)
      b = 100;
      printf("goo\n");
   }
};
*/#pragma once
