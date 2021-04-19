#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Student {
public:
    int student_no;
    char* name;
    int gender;  //0 - 남자 / 1 - 여자
    //생성자
    Student(int student_no, const char* n, int g) {
        this->student_no = student_no;
        //name = new char[100];
        name = new char[strlen(n) + 1];
        //문자열의 길이에 딱맞는 배열이 만들어진다.
        strcpy(name, n);
        gender = g;
    }
    //소멸자 : destructor
    ~Student() {
        printf("소멸자 호출\n");
        delete[] name;
    }
    //모든 동적 메모리를 수동으로 관리해줘야 하는 C++의 특성상 
    //클래스 멤버변수에 동적메모리 할당 된 개체가 있다고 할 경우
    //소멸자에서 처리하지 않으면 하나하나 클래스 외부에서 delete 전에 메모리를 
    //해제해야 한다. -> 불편함과 불합리함을 초래하므로 소멸자를 사용한다.

    void printStudentInfo() {
        printf("학생 번호 : %d\n", student_no);
        printf("학생 이름 : %s\n", name);
        printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
        //인라인 조건절 --> <조건절> ? value1 : value2
    }
};

int main() {
    //인스턴스 = s
    Student s = Student(1234, "홍길동", 0);
    //   s.student_no = 1234;
    //   strcpy(s.name, "홍길동");
    //   s.gender = 0;

    s.printStudentInfo();
    //인스턴스 = ps
    Student* ps = new Student(4321, "홍길순", 1);
    //   ps->student_no = 4321;
    //   strcpy(ps->name, "홍길순");
    //   ps->gender = 1;

    ps->printStudentInfo();

    delete ps;

    return 0;
}


//실습
/*
어느 회사는 사원 관리시스템이 있다.
이 출근관리 시스템은 관리자에 의해 사원을 입력받아 등록할 수 있으며
사원은 각가 사원번호, 이름, 성별, 직급 이라는 속성을 갖고있다.
관리자는 모든사원을 한번에 볼 수 있고,
관리자에 의해 사원이 추가될 수 있으며 사원이 퇴사시 관리자에 의해
삭제될수 있다.
삭제는 사원번호를 입력받아 퇴사처리를 할 수 있다.
사원 번호는 시스템에 의해 자동으로 관리되며,
사원번호가 관리되는 방법은 자유롭게 구현할수있다.(100명)
*/  