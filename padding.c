#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */  
    int studentId; /* 4 bytes */ 
    short grade; /* 2 bytes */ 
};

int main()
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    struct student pst; // 구조체 변수 

    printf("size of student = %ld\n", sizeof(struct student)); /* 구조체 자료형의 크기 == 24 bytes, 원래 13+4+2 = 19이나 
                                                                  padding이 일어나 13 -> 16, 2 -> 4가 되어 24 bytes가 됨 */
    printf("size of int = %ld\n", sizeof(int)); // int 자료형의 크기 == 4 bytes
    printf("size of short = %ld\n", sizeof(short)); // short 자료형의 크기 == 2bytes

    return 0;
}