#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    int list[5]; // 정수 5개 배열
    int *plist[5] = {NULL,}; // 5개 포인터 배열 NULL로 초기화


    plist[0] = (int *)malloc(sizeof(int)); // plist[0] 동적 할당

    list[0] = 1; // 정수 배열 첫번째 원소에 1 저장
    list[1] = 100; // 정수 배열 두번째 원소에 100 저장

    *plist[0] = 200; // 포인터 배열의 첫번째 원소가 가리키는 값에 200 저장

    printf("value of list[0] = %d\n", list[0]); // list[0] == 1
    printf("address of list[0] = %p\n", &list[0]); // list[0]의 주소 (기본 주소)
    printf("value of list = %p\n", list); // list == list[0]의 주소
    printf("address of list (&list) = %p\n", &list); // &list == list[0]의 주소



    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); // list[1] == 100
    printf("address of list[1] = %p\n", &list[1]); // list[1]의 주소 == list[0]의 주소 + sizeof(int)(4bytes)
    printf("value of *(list+1) = %d\n", *(list + 1)); // (list + 1) == &list[1], *(list + 1) == list[1]
    printf("address of list+1 = %p\n", list+1); // (list + 1) == list[1]을 가리키는 포인터 == list[1]의 주소



    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); // *plist[0] == 200
    printf("&plist[0] = %p\n", &plist[0]); // &plist[0] == plist[0]의 주소
    printf("&plist = %p\n", &plist); // &plist == plist[0]의 주소
    printf("plist = %p\n", plist); // plist == plist[0]의 주소 (기본 주소)
    printf("plist[0] = %p\n", plist[0]); // plist[0] == 포인터 배열의 첫번째 원소
    printf("plist[1] = %p\n", plist[1]); // NULL 값
    printf("plist[2] = %p\n", plist[2]); // NULL 값
    printf("plist[3] = %p\n", plist[3]); // NULL 값
    printf("plist[4] = %p\n", plist[4]); // NULL 값



    free(plist[0]); // 동적 할당 해제

}