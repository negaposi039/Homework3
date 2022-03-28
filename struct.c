#include <stdio.h>

struct student1 { // struct로 구조체 생성
    char lastName;
    int studentId;
    char grade;
};

typedef struct { // typedef로 구조체 생성
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; // struct로 구조체 생성 시, 변수 선언 시 struct 필요

    printf("st1.lastName = %c\n", st1.lastName); // A
    printf("st1.studentId = %d\n", st1.studentId); // 100
    printf("st1.grade = %c\n", st1.grade); // A


    student2 st2 = {'B', 200, 'B'}; // typedef로 구조체 생성 시, 변수 선언 시 struct 필요 X

    printf("\nst2.lastName = %c\n", st2.lastName); // B
    printf("st2.studentId = %d\n", st2.studentId); // 200
    printf("st2.grade = %c\n", st2.grade); // B

    student2 st3; // 구조체 변수 선언

    st3 = st2; // 구조 치환

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    if(st3 == st2) /* not working */ // (st3 == st2) 작동 X, strcmp 등 으로 각각 비교해야 함.
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}