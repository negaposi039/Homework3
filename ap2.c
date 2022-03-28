#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    int list[5]; // 정수 배열
    int *plist[5]; // 포인터 배열

    list[0] = 10; // list[0]에 10 저장
    list[1] = 11; // list[1]에 11 저장

    plist[0] = (int*)malloc(sizeof(int)); // plist[0] 동적 할당

    printf("list[0] \t= %d\n", list[0]); // list[0] == 10
    printf("address of list \t= %p\n", list); // list == list[0]의 주소 (기본 주소)
    printf("address of list[0] \t= %p\n", &list[0]); // &list[0] == list[0]의 주소
    printf("address of list + 0 \t= %p\n", list+0); // list+0 == list[0]을 가리키는 포인터 == list[0]의 주소 == list
    printf("address of list + 1 \t= %p\n", list+1); // list+1 == list[1]을 가리키는 포인터 == list[1]의 주소 == list + sizeof(int)(4bytes)
    printf("address of list + 2 \t= %p\n", list+2); // list+2 == list[2]을 가리키는 포인터 == list[2]의 주소 == list + 2*sizeof(int)
    printf("address of list + 3 \t= %p\n", list+3); // list+3 == list[3]을 가리키는 포인터 == list[3]의 주소 == list + 3*sizeof(int)
    printf("address of list + 4 \t= %p\n", list+4); // list+4 == list[4]을 가리키는 포인터 == list[4]의 주소 == list + 4*sizeof(int)
    printf("address of list[4] \t= %p\n", &list[4]); // &list[4] == list[4]의 주소

    free(plist[0]); // 동적 할당 해제
}