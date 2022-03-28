#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    for(i=0; i < MAX_SIZE; i++) // 반복문으로 배열에 값 저장
    input[i] = i;

    /* for checking call by reference */
    printf("address of input = %p\n", input); // input == &input[0])

    answer = sum(input, MAX_SIZE); // 호출 시 input(=&input[0])은 주소를 담고 있고 주소가 sum 함수의 list에 복사
    printf("The sum is: %f\n", answer); // sum 함수 리턴값
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); // list == 복사된 input(=&input[0])
    printf("address of list = %p\n\n", &list); // &list == list의 주소
    
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) // n은 call by value, 값을 그대로 변수 n에 복사
        tempsum += list[i]; // list는 call by reference, input의 주소를 list가 받아 list를 통해 input 배열에 접근
    return tempsum; 
}