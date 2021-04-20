#define _CRT_SECURE_NO_WARNINGS
#include <cstdio> 
#include <cstring>
#include <cstdlib>

int number_counter = 1;


class Employee {
public:
    int no;
    char name[100];
    int gender;
    char rank[100];

    Employee(char* name, int gender, char* rank) {
        strcpy(this->name, name);
        this->gender = gender;
        strcpy(this->rank, rank);      //포인터를 받아왔기 때문에 
        this->no = number_counter;
        number_counter++;
    }

    void printInfo() {
        printf("사원번호 : %d\n", no);
        printf("사원명 : %s\n", name);
        printf("성별 : %s\n", gender == 0 ? "남성" : "여성");
        printf("직급 : %s\n", rank);
    }
};

int getInt(const char* prompt);

//메모리 해제 
char* getString(const char* prompt);