#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    int **x; // 이중 포인터

    printf("sizeof(x) = %lu\n", sizeof(x)); // 이중 포인터 변수의 크기 == int 자료형의 크기 (4bytes)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 포인터 한 번 역참조 *x의 크기 == 4bytes
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // // 포인터 두 번 역참조 **x의 크기 == 4bytes
}