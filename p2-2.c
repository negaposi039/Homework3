#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    int one[] = {0, 1, 2, 3, 4}; // 1차원 배열

    printf("one = %p\n", one); // one == &one[0]
    printf("&one = %p\n", &one); // &one == &one[0]
    printf("&one[0] = %p\n", &one[0]); // &one[0] == one[0]의 주소
    printf("\n");

    print1(&one[0], 5); // print1 함수에 배열 주소, 행 수 전달

    return 0;
}
void print1 (int *ptr, int rows) // 포인터를 이용하여 1차원 배열의 주소와 값 출력 // one + i == one[i]를 가리키는 포인터
{/* print out a one-dimensional array using a pointer */

    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr + 0 == &one[0], ptr + 1 == &one[1], ...
    printf("\n");                                   // *(ptr + 0) == one[0], *(ptr + 1) == one[1], ...
}